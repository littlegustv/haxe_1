/*

TODO:
 - remaining layer issues (fewer now!!)
 - tilemap loading; more robust (get solid, object layers by 'name' instead of index)
 - skippable death animation
 - levels!

 - direction indicators?
 - try android export??

 */

import haxegon.*;

class Menu {
  function init () {
    Text.setfont("titan", 16);
    Text.align = Text.CENTER;
    Gui.setfont("titan", 12);
    Gui.style.button = Col.RED;
    Gui.style.border = Col.WHITE;
    Gui.style.highlight = Col.PINK;
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
    Text.display(Gfx.screenwidth / 2, Gfx.screenheight / 2, "Arachno-Communist");
    if (Gui.button("Level1!")) {
      Save.savevalue("level", 1);
      Scene.change(Game);
    } else if (Gui.button("Level2!")) {
      Save.savevalue("level", 2);
      Scene.change(Game);
    } 
  }
}

class Game {
  var entities = new Array();
  var enemies = new Array();
  var switches = new Array();

  var player:Raindrop.Entity;
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
    
    Gfx.loadtiles("spider", 18, 16);
    Gfx.loadtiles("ghost", 16, 16);
    Gfx.loadtiles("door", 16, 16);
    Gfx.loadtiles("tile", 16, 16);
    Gfx.loadtiles("spikes", 16, 16);


    var level:Dynamic = Data.loadjson('level${Save.loadvalue("level")}.json');

    var height = level.layers[0].height;
    var width = level.layers[0].width;
    
    for (i in 0...width) {
      var row = new Array();
      this.grid.push(row);
      for (j in 0...height) {
        var cell = level.layers[0].data[i + j * width];
        row.push(cell);
        if (cell != 0) {
          //trace(i, j, i + j * width);
          var tile = new Raindrop.Entity(i * 16, j * 16);
          new Raindrop.Animate(tile, "tile", 1);
          this.entities.unshift(tile);
        }
      }
    }
    
    var layers = Layer.getlayers();
    for (l in layers) {
      if (l != "screen") {
        Layer.detach(l);
      }
    }

    Layer.attach("bg");

    Layer.attach("foreground");

    Layer.attach("ui");

    for (i in 0...level.layers[1].objects.length) {
      var obj:Dynamic = level.layers[1].objects[i];
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
        new Raindrop.Animate(this.player, "spider", 0.1);
        this.entities.push(this.player);
        this.crawl = new Raindrop.Crawl(this.player, this.grid, 0.25, [obj.properties.directionx, obj.properties.directiony], obj.properties.turn);
      } else if (obj.name == "Exit") {
        var e = new Raindrop.Entity(obj.x, obj.y);
        e.angle = obj.properties.angle;
        new Raindrop.Animate(e, "door", 0.5);
        this.entities.push(e);
        this.switches.push(e);
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
    Gfx.fillbox(0, 0, Gfx.screenwidth, Gfx.screenheight, Col.BLACK);

    Layer.move(
      "foreground", 
      Layer.getx("foreground") + ((Gfx.screenwidth / 2 - this.player.x) - Layer.getx("foreground")) * dt, 
      Layer.gety("foreground") + ((Gfx.screenheight / 2 - this.player.y) - Layer.gety("foreground")) * dt);
    /*
    */

    Layer.drawto("foreground");
    Gfx.fillbox(0, 0, Layer.width("foreground"), Layer.height("foreground"), Col.BLACK);
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

    for (enemy in this.enemies) {
      if (Geom.overlap(this.player.x, this.player.y, this.player.w, this.player.h, enemy.x, enemy.y, enemy.w, enemy.h)) {
        Scene.change(Game);
      }
    }

    for (s in this.switches) {
      if (Geom.overlap(this.player.x, this.player.y, this.player.w, this.player.h, s.x, s.y, s.w, s.h)) {
        Save.savevalue("level", 2);
        Scene.change(Game);
      }
    }

    if (Input.justpressed(Key.SPACE)) {
      this.crawl.pause = true;
    }
    if (Input.justreleased(Key.SPACE)) {
      this.crawl.pause = false;
      this.crawl.jump = true;
    }
    
    Layer.drawto("ui");

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