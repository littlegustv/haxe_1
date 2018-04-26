/*

Let's keep it simple! (demo - set of waves and boss)

- BUGS
  x- player.die() being trigger multiple times (multi-reset on death) {was still checking collisions}

x- BAT themed? BATFAX!

x- combo system
	x- display text behavior ("COMBO +1")
	x- health/mana recover system
		x- affected by current combo

x- entity die method (alive = true), optional callback with delay
	x- particle effects
	x- hit/destroy sound effects

x- elegant solution to screen wrapping? (BOUNCE)

- enemies
  - movement
    - 'ladder'
    - grid-based spiral
    - vertical up/down bounce
    - zig-zag bounce
    - periodic relocate to new position
	- projectiles
    - homing
    - burst
    - spread
    - single

x- improve hitboxes
	x- more robust method?

- basic GUI, scenes
  - GUI plugin styling
  - load GUI examples separately, try them out?
    - figure out positioning, color, font at LEAST

- upgrades/upgrade menu (or simple in-game powerup pickups?)
	- delayed blast verticle laser (like 1 second after, at your old position)

- boss!
  - circular beam weapon (damages with a certain radius) - forces you to back off
  - gravity-effect summons projectiles to spiral in from without
  - telegraphed target/hit attack
  - spawn enemies?

- visuals
  - feedback on collisions/bounce (damage effect, bounce effect ... maybe border highlight)
  - animation states for jump, fall and BEAM, (and hit? ^^)
  - blood (!?) particle effect to emphasize current damage state?

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
  var gravity:Float;
  var jumpstrength:Float;
  var maxspeed:Float;

  var invulnerable:Bool = false;
  var admin:Bool = false;
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
    Gfx.loadtiles("mosquito", 17, 18);
    Gfx.loadtiles("bat", 19, 18);
    Gfx.loadtiles("turn", 16, 17);
    Gfx.loadtiles("dust", 8, 8);
    Gfx.loadtiles("blob", 10, 10);
    Gfx.loadtiles("corn", 18, 18);
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

    // constants
    this.gravity = 250;
    this.jumpstrength = 175;
    this.maxspeed = 200;

    this.player = new Raindrop.Entity(100, 100, 18, 18, function (myself:Raindrop.Entity) {
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
    this.animate = new Raindrop.Animate(this.player, "bat", 0.4);
    this.velocity = new Raindrop.Velocity(this.player, 0, 0);
    //new Raindrop.Wrap(this.player, 0, -100, Gfx.screenwidth, Gfx.screenheight + 100);
    new Raindrop.Bounce(this.player, 0, -100, Gfx.screenwidth - 16, Gfx.screenheight - 16, this.velocity);
    this.entities.push(this.player);

    for (i in 0...Math.ceil(Gfx.screenwidth / 18)) {
	    var sky = new Raindrop.Entity(i * 48, 0);
	    new Raindrop.Animate(sky, "sky", 1);

	    var ground = new Raindrop.Entity(i * 64, Gfx.screenheight - 6);
	    new Raindrop.Animate(ground, "ground", 1);

	    var building = new Raindrop.Entity(i * 64 + 16, Gfx.screenheight - 20);
	    new Raindrop.Animate(building, "building", 1);
	    //this.entities.unshift(ground);
      //this.entities.unshift(building);
	    //this.entities.unshift(sky);
      
      var corn = new Raindrop.Entity(i * 18, Gfx.screenheight - 18);
      new Raindrop.Animate(corn, "corn", 0.5);
      this.entities.unshift(corn);
      
    }


    //Music.play("soundtrack");
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
    	var e = new Raindrop.Entity(1, Random.int(24, Gfx.screenheight - 24), 18, 19, function (myself:Raindrop.Entity) {
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
    	new Raindrop.Animate(e, "mosquito", 0.2);
    	new Raindrop.Velocity(e, 50, 0);
    	new Raindrop.Crop(e, -100, 0, Gfx.screenwidth + 100, Gfx.screenheight);
      new Raindrop.Wrap(e, 0, -100, Gfx.screenwidth, Gfx.screenheight + 100);
      new Raindrop.Periodic(e, 1, function (myself:Raindrop.Entity) {
        var p = new Raindrop.Entity(myself.x + 16, myself.y + 12, 10, 10);
        new Raindrop.Animate(p, "blob", 0.16);
        new Raindrop.Velocity(p, 100, 0);
        new Raindrop.Crop(p, 0, 0, Gfx.screenwidth, Gfx.screenheight);
        this.entities.unshift(p);
        this.enemies.unshift(p);
      });
    	this.entities.push(e);
    	this.enemies.push(e);
    }

    //Gui.text('MP: ${Math.round(this.mana)} !!!');
    //Gui.text('HHP: ${Math.round(this.health)} ?!?');
    //Gui.text('Points: ${this.points}.');

    if (this.admin) {
      Gui.window("Movement Control", 0); 

      this.invulnerable = Gui.radio("Invulnerable", this.invulnerable);

      Gui.text('Gravity: ${this.gravity}');
      this.gravity = Gui.slider(200, 0, 400, this.gravity);
      Gui.text('Jump Strength: ${this.jumpstrength}');
      this.jumpstrength = Gui.slider(200, 0, 400, this.jumpstrength);
      Gui.text('Max (Fall) Speed: ${this.maxspeed}');
      this.maxspeed = Gui.slider(200, 0, 400, this.maxspeed);
      if (Gui.button("Close")){
        this.admin = false;
      }
      Gui.end();
    } else {
      if (Gui.button("Menu")) {
        this.admin = true;
      }
    }

    this.mana = Math.min(100, this.mana + 5 * dt);
    if (!this.locked) {
	    this.velocity.y = Math.min(this.maxspeed, this.velocity.y + this.gravity * dt);
	    if (this.velocity.x != 0) {
	    	this.velocity.x = Math.round(this.velocity.x - this.velocity.x * dt);
	    }

	    if (Input.justpressed(Key.UP)) {
	    	var d = new Raindrop.Entity(this.player.x + 4, this.player.y + 4);
	    	new Raindrop.Animate(d, "dust", 0.2, true);
	    	this.entities.unshift(d);
	    	Sound.play("jump");
	    	//trace(Math.min(100, this.player.y));
	    	this.velocity.y = -Math.min(this.jumpstrength, this.player.y * 2);
	    }
	    if (Input.justpressed(Key.LEFT)) {
		    if (this.mana > 30) {
		    	Sound.play("powerup");
		    	this.locked = true;
			    new Raindrop.Beam(this.player, 0.4, -1, function () {
			    	this.velocity.x = this.jumpstrength;
			    	this.locked = false;
			    	Sound.play("blink");
			    	for (enemy in this.enemies) {
				    	if (Geom.overlap(this.player.x - Gfx.screenwidth, this.player.y, Gfx.screenwidth, this.player.h, enemy.x, enemy.y, enemy.w, enemy.h)) {
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
			    	this.velocity.x = -this.jumpstrength;
			    	this.locked = false;
			    	Sound.play("blink");
			    	for (enemy in this.enemies) {
				    	if (Geom.overlap(this.player.x, this.player.y, Gfx.screenwidth, this.player.h, enemy.x, enemy.y, enemy.w, enemy.h)) {
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
    	if (this.player.alive && Geom.overlap(this.player.x, this.player.y, this.player.w, this.player.h, enemy.x, enemy.y, enemy.w, enemy.h)) {
    		if (!this.invulnerable) {
          this.health -= 30;          
        }
  			Sound.play("hit_small");
  			enemy.die();
    		if (this.health <= 0) {
    			this.player.die();
    		}
    	}
    }    
  }
}

