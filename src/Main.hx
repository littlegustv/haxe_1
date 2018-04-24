/*

Let's keep it simple! (demo - set of waves and boss)

- BUGS
  - player.die() being trigger multiple times (multi-reset on death)

x- combo system
	x- display text behavior ("COMBO +1")
	x- health/mana recover system
		x- affected by current combo

x- entity die method (alive = true), optional callback with delay
	x- particle effects
	x- hit/destroy sound effects

x- elegant solution to screen wrapping? (BOUNCE)

- enemies
	- projectiles

- improve hitboxes
	- more robust method?

- basic GUI, scenes

- upgrades/upgrade menu (or simple in-game powerup pickups?)
	- delayed blast verticle laser (like 1 second after, at your old position)

- boss!

*/

import haxegon.*;

class Main {
  var entities = new Array();
  var enemies = new Array();
  var player:Raindrop.Entity;
  var velocity:Raindrop.Velocity;
  var animate:Raindrop.Animate;
  var mana:Float;
  var health:Float;
  var locked:Bool;
  var points:Int;
  var combo:Int;
  var combotimer:Float;
  static var combothreshold:Int = 3;
  var st:Float = 0; // for some reason Core.time here or in init() doesn't run in time to be valid for update(), so I set it to 0
  function init(){
    //this.titles = [];
    //Layer.create("fg");
    //Layer.attach("fg");    

    //Layer.create("ui");
    //Layer.attach("ui");

    Gfx.loadtiles("asteroid", 15, 15);
    Gfx.loadtiles("bug", 18, 34);
    Gfx.loadtiles("jump", 16, 17);
    Gfx.loadtiles("turn", 16, 17);
    Gfx.loadtiles("dust", 8, 8);
    Gfx.loadtiles("building", 32, 32);
    Gfx.loadtiles("sky", 48, 28);
    Gfx.loadtiles("ground", 64, 13);
		Gfx.clearcolor = Col.BLACK;

		Sound.load("jump");
		Sound.load("powerup");
		Sound.load("blink");
		Sound.load("denied");
		Sound.load("hit");
		Sound.load("hit_small");

		//Core.showstats = true;
		this.locked = false;
		this.mana = 100;
		this.health = 100;
		this.points = 0;
    this.combo = 0;
    this.combotimer = 0;

    this.player = new Raindrop.Entity(100, 100, function (myself:Raindrop.Entity) {
      myself.alive = false;
      for (i in 0...20) {
        var p = new Raindrop.Entity(myself.x, myself.y);
        new Raindrop.Animate(p, "dust", 0.25, true);
        new Raindrop.Velocity(p, Random.int(-20,20), Random.int(-20, 20));
        this.entities.unshift(p);
      }
      Sound.play("hit");
      Core.delaycall(function () {
        Scene.restart(Main);
      }, 1);
    });
    this.animate = new Raindrop.Animate(this.player, "jump", 0.4);
    this.velocity = new Raindrop.Velocity(this.player, 0, 0);
    //new Raindrop.Wrap(this.player, 0, -100, Gfx.screenwidth, Gfx.screenheight + 100);
    new Raindrop.Bounce(this.player, 0, -100, Gfx.screenwidth, Gfx.screenheight - 16, this.velocity);
    this.entities.push(this.player);

    for (i in 0...10) {
	    var sky = new Raindrop.Entity(i * 48, 0);
	    new Raindrop.Animate(sky, "sky", 1);

	    var ground = new Raindrop.Entity(i * 64, Gfx.screenheight - 6);
	    new Raindrop.Animate(ground, "ground", 1);

	    var building = new Raindrop.Entity(i * 64 + 16, Gfx.screenheight - 20);
	    new Raindrop.Animate(building, "building", 1);
	    this.entities.unshift(ground);
      this.entities.unshift(building);
	    //this.entities.unshift(sky);
    }

    Music.play("soundtrack");
  }
 
  function update() {
    var nt:Float = Core.time;
    var dt:Float = Math.min(nt - this.st, 1.0 / 30); // cap at 30 frames per second ... what will this do, I wonder?
    this.st = nt;

    this.combotimer += dt;
    if (this.combotimer > combothreshold) {
      this.combo = 0;
    }

    //Layer.drawto("fg");
    for (entity in this.entities) {
      entity.draw();
    }

    for (entity in this.entities) {
      entity.update(dt);
    }

    for (entity in this.entities) {
      if (!entity.alive) {
        this.entities.remove(entity);
        this.enemies.remove(entity);
      }
    }
    // remove from enemies (collision) list as well

    if (Random.chance(2) && this.enemies.length < 10) {
    	var e = new Raindrop.Entity(1, Random.int(24, Gfx.screenheight - 24), function (myself:Raindrop.Entity) {
        myself.alive = false;
        this.combo += 1;
        this.combotimer = 0;
        this.points += this.combo;
        for (i in 0...20) {
          var p = new Raindrop.Entity(myself.x, myself.y);
          new Raindrop.Animate(p, "dust", 0.25, true);
          new Raindrop.Velocity(p, Random.int(-20,20), Random.int(-20, 20));
          this.entities.unshift(p);
        }
        var t = new Raindrop.Entity(myself.x, myself.y - 8);
        new Raindrop.TextBox(t, '${this.combo} COMBO', Col.BLUE);
        new Raindrop.Periodic(t, 1, function (myself) {
          myself.die();
        }, false);
        var h = new Raindrop.Entity(myself.x, myself.y);
        if (this.health < 100) {
          this.health = Math.min(100, this.health + 5 + this.combo);
          this.mana = Math.min(100, this.mana + 5 + this.combo);
          new Raindrop.TextBox(h, '+${5 + this.combo} Mana, +${5 + this.combo} HP!', Col.RED);
          new Raindrop.Periodic(h, 1, function (myself) {
            myself.die();
          }, false);
        } else {
          this.mana = Math.min(100, this.mana + 10 + this.combo);
          new Raindrop.TextBox(h, '+${10 + this.combo} Mana!', Col.RED);
          new Raindrop.Periodic(h, 1, function (myself) {
            myself.die();
          }, false);
        }
        this.entities.push(t);
        this.entities.push(h);
      });
    	new Raindrop.Animate(e, "bug", 0.2);
    	new Raindrop.Velocity(e, 50, 0);
    	new Raindrop.Crop(e, -100, 0, Gfx.screenwidth + 100, Gfx.screenheight);
      new Raindrop.Wrap(e, 0, -100, Gfx.screenwidth, Gfx.screenheight + 100);
      new Raindrop.Periodic(e, 1, function (myself:Raindrop.Entity) {
        var p = new Raindrop.Entity(myself.x + 16, myself.y + 12);
        new Raindrop.Animate(p, "asteroid", 1);
        new Raindrop.Velocity(p, 100, 0);
        new Raindrop.Crop(p, 0, 0, Gfx.screenwidth, Gfx.screenheight);
        this.entities.unshift(p);
        this.enemies.unshift(p);
      });
    	this.entities.push(e);
    	this.enemies.push(e);
    }

    Gui.text('MP: ${Math.round(this.mana)} !!!');
    Gui.text('HHP: ${Math.round(this.health)} ?!?');
    Gui.text('Points: ${this.points}.');
    
    this.mana = Math.min(100, this.mana + 5 * dt);
    if (!this.locked) {
	    this.velocity.y = Math.min(100, this.velocity.y + 100 * dt);
	    if (this.velocity.x != 0) {
	    	this.velocity.x = Math.round(this.velocity.x - this.velocity.x * dt);
	    }

	    if (Input.justpressed(Key.UP)) {
	    	var d = new Raindrop.Entity(this.player.x + 4, this.player.y + 4);
	    	new Raindrop.Animate(d, "dust", 0.2, true);
	    	this.entities.unshift(d);
	    	Sound.play("jump");
	    	trace(Math.min(100, this.player.y));
	    	this.velocity.y = -Math.min(100, this.player.y * 2);
	    }
	    if (Input.justpressed(Key.LEFT)) {
		    if (this.mana > 30) {
		    	Sound.play("powerup");
		    	this.locked = true;
			    new Raindrop.Beam(this.player, 0.4, -1, function () {
			    	this.velocity.x = 100;
			    	this.locked = false;
			    	Sound.play("blink");
			    	for (enemy in this.enemies) {
				    	if (Geom.overlap(this.player.x - Gfx.screenwidth, this.player.y, Gfx.screenwidth, 16, enemy.x, enemy.y, 16, 16)) {
				    		enemy.die();
				    	}
				    }
		    	});
		    	this.mana -= 30;
		    } else {
		    	Sound.play("denied");
		    }
		   } else if (Input.justpressed(Key.RIGHT)) {
	    	if (this.mana > 30) {	    		
		    	Sound.play("powerup");
		    	this.locked = true;
			    new Raindrop.Beam(this.player, 0.4, 0, function () {
			    	this.velocity.x = -100;
			    	this.locked = false;
			    	Sound.play("blink");
			    	for (enemy in this.enemies) {
				    	if (Geom.overlap(this.player.x, this.player.y, Gfx.screenwidth, 16, enemy.x, enemy.y, 16, 16)) {
                enemy.die();
				    	}
				    }
		    	});
		    	this.mana -= 30;
	    	} else {
	    		Sound.play("denied");
		    }
	    }
    } else {
	    this.velocity.y = Math.min(0, this.velocity.y + 100 * dt);    	
    }

    for (enemy in this.enemies) {
    	if (Geom.overlap(this.player.x, this.player.y, 16, 16, enemy.x, enemy.y, 16, 16)) {
    		this.health -= 30;
  			Sound.play("hit_small");
  			enemy.die();
    		if (this.health <= 0) {
    			this.player.die();
    		}
    	}
    }

    if (this.player.y > Gfx.screenheight - 12) {
  		Sound.play("hit");
  		this.velocity.y = -100;
  		this.player.y = Gfx.screenheight - 13;
    	this.health -= 30;
  		if (this.health <= 0) {
  			this.player.die();
  		}
    }
  }
}

