/*

TODO:
x - remaining layer issues (fewer now!!)
x- tilemap loading; more robust (get solid, object layers by 'name' instead of index)
x- skippable death animation
x- somehow implement generic tweening function (any field, multiple transition functions)
 - levels!
 - less wobbly camera, bound to game map size

x- direction, jump indicators
x- way to cancel jump
 - try android export??

 */

import haxegon.*;

class Menu {
  function init () {
    //Music.play("music");
    Sound.load("jump");
    Sound.load("die");
    Sound.load("land");

    Text.setfont("sourcecode", 12);
    Text.align = Text.CENTER;
    Gui.setfont("sourcecode", 8);
    Gui.style.textcol = Col.BLACK;
    Gui.style.button = Col.WHITE;
    Gui.style.border = Col.WHITE;
    Gui.style.highlight = Col.PINK;
    Gui.guisettings.buttonspacing = 0;
    Gui.guisettings.buttonheight = 16;
    //Gfx.clearcolor = Col.BLACK;
    Layer.attach("bg");

  }

  function reset() {
    var layers = Layer.getlayers();
    trace(layers);
    for (l in layers) {
      if (l != "screen") {
        Layer.detach(l);
      }
    }
    Layer.attach("bg");
  }

  function update () {
    Layer.drawto("bg");
    Gfx.clearscreen(Col.BLACK);

    Text.setfont("sourcecode", 48);
    Text.display(Gfx.screenwidth / 2, Gfx.screenheight / 2 - 36, "THE");

    Text.setfont("sourcecode", 24);
    Text.display(Gfx.screenwidth / 2, Gfx.screenheight / 2, "ARACHNO");
    Text.setfont("sourcecode", 18);
    Text.display(Gfx.screenwidth / 2, Gfx.screenheight / 2 + 16, "COMMUNIST");
    
    if (Gui.button("Level1!")) {
      Save.savevalue("level", 1);
      Scene.change(Game);
    } 
    Gui.shift();
    if (Gui.button("Level2!")) {
      Save.savevalue("level", 2);
      Scene.change(Game);
    }

  }
}

class Game {
  var grip:Float = 1;

  var entities = new Array();
  var enemies = new Array();
  var switches = new Array();

  var player:Raindrop.Entity;
  var animate:Raindrop.Animate;
  var grid = new Array();
  var st:Float = 0.0;

  var crawl:Raindrop.Crawl;

  function init(){
    this.entities = new Array();
    this.switches = new Array();
    this.enemies = new Array();
    this.grid = new Array();
    this.st = 0.0;

    // fix me: seem to need to manually clear (using 'fillbox') per-layer, but that lets previous scenes bleed through?
    Gfx.clearcolor = Col.TRANSPARENT;
    
    Gfx.loadtiles("spider", 16, 16);
    Gfx.loadtiles("ghost", 16, 16);
    Gfx.loadtiles("door", 16, 16);
    Gfx.loadtiles("tile", 16, 16);
    Gfx.loadtiles("spikes", 16, 16);
    Gfx.loadtiles("tileset", 16, 16);
    Gfx.loadtiles("indicators", 16, 16);
    Gfx.loadtiles("dust", 8, 8);

    var level:Dynamic = Data.loadjson('level${Save.loadvalue("level")}.json');
    
    var layers = Layer.getlayers();
    for (l in layers) {
      if (l != "screen") {
        Layer.detach(l);
      }
    }

    Layer.attach("bg");

    Layer.attach("foreground");

    Layer.attach("ui");

    for (n in 0...level.layers.length) {
      if (level.layers[n].name == "Solids") {
        var height = level.layers[n].height;
        var width = level.layers[n].width;
        
        for (i in 0...width) {
          var row = new Array();
          this.grid.push(row);
          for (j in 0...height) {
            var cell = level.layers[n].data[i + j * width];
            row.push(cell);
            if (cell != 0) {
              //trace(i, j, i + j * width);
              var tile = new Raindrop.Entity(i * 16, j * 16);
              new Raindrop.Animate(tile, "tile", 1);
              this.entities.push(tile);
            }
          }
        }
      } else if (level.layers[n].name == "Objects") {
        for (i in 0...level.layers[n].objects.length) {
          var obj:Dynamic = level.layers[n].objects[i];
          if (obj.name == "Enemy") {
            var e = new Raindrop.Entity(obj.x, obj.y);
            e.angle = obj.properties.angle;
            if (obj.properties.directionx != null && obj.properties.directiony != null && obj.properties.turn != null) {
              new Raindrop.Crawl(e, this.grid, 0.5, [obj.properties.directionx, obj.properties.directiony], obj.properties.turn);          
              new Raindrop.Animate(e, "ghost", 0.1);
            } else {
              new Raindrop.Animate(e, "spikes", 0.4);
            }
            this.entities.push(e);
            this.enemies.push(e);
          } else if (obj.name == "Player") {
            this.player = new Raindrop.Entity(obj.x, obj.y);
            this.animate = new Raindrop.Animate(this.player, "spider", 0.25);
            this.entities.push(this.player);

            this.crawl = new Raindrop.Crawl(this.player, this.grid, 0.25, [obj.properties.directionx, obj.properties.directiony], obj.properties.turn,
              function () {
                Sound.play("jump");
                var d = new Raindrop.Entity(this.player.x + this.player.w / 2, this.player.y + this.player.h / 2);
                new Raindrop.Animate(d, "dust", 0.2, true);
                this.entities.push(d);
              },
              function () {
                Sound.play("land");
                var normal = [Math.round(Geom.cos(this.player.angle - 90)), Math.round(Geom.sin(this.player.angle - 90))];

                var d = new Raindrop.Entity(this.player.x + this.player.w / 2, this.player.y + this.player.h / 2);
                new Raindrop.Animate(d, "dust", 0.2, true);
                new Raindrop.Velocity(d, -normal[1] * 20, normal[0] * 20);
                this.entities.push(d);

                var d = new Raindrop.Entity(this.player.x + this.player.w / 2, this.player.y + this.player.h / 2);
                new Raindrop.Animate(d, "dust", 0.2, true);
                new Raindrop.Velocity(d, normal[1] * 20, -normal[0] * 20);
                this.entities.push(d);
              }
            );
            /*
            
            EASING DEMONSTRATION:
            var eases = ["easeOutQuad", "easeInOutQuad", "easeInCubic", "easeOutCubic", "easeInOutCubic", "easeInSin", "easeOutSin", "easeInOutSin", "easeInElastic", "easeOutElastic", "easeInOutElastic", "easeInQuart", "easeOutQuart", "easeInOutQuart", "easeInQuint", "easeOutQuint", "easeInOutQuint"];
            for (k in 0...eases.length) {
              var n = new Raindrop.Entity(this.player.x + Gfx.screenwidth / 2 - k * 16, this.player.y - 128);
              new Raindrop.Animate(n, "ghost", 0.5);
              new Raindrop.Tween(n, ["y"], [this.player.y], eases[k], 0.25, function () {
                n.alive = false;
              });
              this.entities.push(n);              
            }

             */
            Layer.move(
              "foreground", 
              Gfx.screenwidth / 2 - this.player.x, 
              Gfx.screenheight / 2 - this.player.y);

          } else if (obj.name == "Exit") {
            var e = new Raindrop.Entity(obj.x, obj.y);
            e.angle = obj.properties.angle;
            new Raindrop.Animate(e, "door", 0.5);
            this.entities.push(e);
            this.switches.push(e);
          }
        }
      } else {
        var e = new Raindrop.Entity(-4, -4);
        new Raindrop.TileMap(e, level.layers[n], "tileset", level.layers[n].name);
        this.entities.unshift(e);
      }
    }



    /*
    else if (picked == false && this.grid[i][j - 1] == 0) {
    }
    */
  }
 
  function update() {
    var nt:Float = Core.time;
    var dt:Float = Math.min(nt - this.st, 1.0 / 30); // cap at 30 frames per second ... what will this do, I wonder?
    this.st = nt;

    Layer.drawto("bg");
    Gfx.fillbox(0, 0, Gfx.screenwidth, Gfx.screenheight, 0xEC3232);

    Layer.move(
      "foreground", 
      Math.min(0, Layer.getx("foreground") + ((Gfx.screenwidth / 2 - this.player.x) - Layer.getx("foreground")) * dt), 
      Layer.gety("foreground") + ((Gfx.screenheight / 2 - this.player.y) - Layer.gety("foreground")) * dt);
    /*
    */

    Layer.drawto("foreground");
    Gfx.fillbox(0, 0, Layer.width("foreground"), Layer.height("foreground"), 0xEC3232);
    for (entity in this.entities) {
      entity.draw();
    }

    for (entity in this.entities) {
      entity.update(dt);
    }

    for (entity in this.entities) {
      if (!entity.alive) {
        this.entities.remove(entity);
      }
    }

    if (this.player.alive) {      
      for (enemy in this.enemies) {
        if (Geom.overlap(this.player.x + 2, this.player.y + 2, this.player.w - 4, this.player.h - 4, enemy.x + 2, enemy.y + 2, enemy.w - 4, enemy.h - 4)) {
          this.player.alive = false;
          for (i in 0...15) {
            var d = new Raindrop.Entity(this.player.x, this.player.y);
            var angle = Random.int(0, 360);
            var speed = Random.int(10, 25);
            new Raindrop.Velocity(d, Math.cos(angle) * speed, Math.sin(angle) * speed);
            new Raindrop.Animate(d, "dust", 0.2, true);
            this.entities.push(d);
          }
          Sound.play("die");
          var ragdoll = new Raindrop.Entity(this.player.x, this.player.y);
          new Raindrop.Animate(ragdoll, "spider", 0.1);
          new Raindrop.Tween(ragdoll, ["y", "angle"], [ragdoll.y + 320, ragdoll.angle + 720], "easeInQuad", 1, function () {
            Scene.change(Game);
          });
          this.entities.push(ragdoll);
          break;
        }
      }
    }

    for (s in this.switches) {
      if (Geom.overlap(this.player.x, this.player.y, this.player.w, this.player.h, s.x, s.y, s.w, s.h)) {
        Save.savevalue("level", 2);
        Scene.change(Game);
      }
    }

    Layer.drawto("ui");

    if (Input.justpressed(Key.SPACE) || Mouse.leftheld()) {
      this.crawl.pause = true;
      //this.animate.stop();
    }
    if (this.crawl.pause) {
      
      if (Input.pressed(Key.SPACE)) {

      } else {
        //Text.display(Gfx.screenwidth / 2, Gfx.screenheight / 2 - 24, "Cancel", Col.WHITE, 0.6);
        //Text.display(Gfx.screenwidth / 2, Gfx.screenheight / 2 + 24, "Jump!", Col.PINK, 0.6);
      }

      if (Input.justreleased(Key.SPACE) || (Mouse.leftreleased() && Mouse.y >= Gfx.screenheight / 2)) {
        this.crawl.pause = false;
        this.crawl.jump = true;
        //this.animate.resume();
      }
      if (Input.justreleased(Key.ESCAPE) || (Mouse.leftreleased() && Mouse.y <= Gfx.screenheight / 2)) {
        this.crawl.pause = false;
        //this.animate.resume();
      }
    } else {
      //this.grip = Math.min(1, this.grip + dt / 2);
    }

    if (Gui.button("Menu")) {
      Scene.change(Menu);
    }
  }
}

class Main {
  function init () {
    Layer.create("bg");
    Layer.create("foreground", 40 * 16, 80 * 16);
    Layer.create("ui");

    Scene.change(Menu);
  }

  function update () {

  }
}