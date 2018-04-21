import haxegon.*;

class Behavior {
	var entity:Entity;
	public function new (entity) {
		this.entity = entity;
		this.entity.add_behavior(this);
	}
	public function update(dt:Float) {
	}
	public function draw() {
	}
}

class Animate extends Behavior {
	var frame:Int = 0;
	var frames:Int;
	var speed:Float;
	var time:Float = 0;
	var sprite:String;
	var remove:Bool;
	public function new (entity, sprite, speed, remove:Bool = false) {
		super(entity);
		this.sprite = sprite;
		this.frames = Gfx.numberoftiles(sprite);
		this.speed = speed;
		this.remove = remove;
	}
	public override function update (dt:Float) {
		this.time += dt;
		if (this.time >= this.speed) {
			this.time = 0;
			this.frame = this.frame + 1;
			if (this.frame >= this.frames) {
				if (this.remove) this.entity.alive = false;
				else this.frame = 0;
			} 
		}
	}
	public override function draw () {
		Gfx.drawtile(Math.round(this.entity.x), Math.round(this.entity.y), this.sprite, this.frame);
	}
}

class Velocity extends Behavior {
	public var x:Float;
	public var y:Float;
	public function new(entity, x, y) {
		super(entity);
		this.x = x;
		this.y = y;
	}
	public override function update (dt:Float) {
		this.entity.x += this.x * dt;
		this.entity.y += this.y * dt;
	}
	public override function draw () {}
}

class Wrap extends Behavior {
	var minx:Int;
	var maxx:Int;
	var miny:Int;
	var maxy:Int;
	public function new(entity, minx, miny, maxx, maxy) {
		super(entity);
		this.minx = minx;
		this.miny = miny;
		this.maxx = maxx;
		this.maxy = maxy;
	}
	public override function update(dt) {
		if (this.entity.x > this.maxx) this.entity.x = this.minx;
		if (this.entity.x < this.minx) this.entity.x = this.maxx;
		if (this.entity.y > this.maxy) this.entity.y = this.miny;
		if (this.entity.y < this.miny) this.entity.y = this.maxy;		
	}
}

class Crop extends Behavior {
	var minx:Int;
	var maxx:Int;
	var miny:Int;
	var maxy:Int;
	public function new(entity, minx, miny, maxx, maxy) {
		super(entity);
		this.minx = minx;
		this.miny = miny;
		this.maxx = maxx;
		this.maxy = maxy;
	}
	public override function update(dt) {
		if (this.entity.x > this.maxx || this.entity.x < this.minx || this.entity.y > this.maxy || this.entity.y < this.miny) this.entity.alive = false;
	}
}

class Periodic extends Behavior {
	var time:Float;
	var callback:Void->Void;
	var interval:Float;
	public function new(entity, interval, callback) {
		super(entity);
		this.time = 0;
		this.interval = interval;
		this.callback = callback;
	}
	public override function update (dt) {
		this.time += dt;
		if (this.time >= this.interval) {
			this.time = 0;
			this.callback();
		}
	}
}

class Entity {
  public var x:Float;
  public var y:Float;
  public var alive:Bool;
  var text:String;
  var behaviors:Array<Behavior> = new Array();
  public function new (x, y) {
    this.x = x;
    this.y = y;
    this.alive = true;
    //this.behaviors.push(new Animate(this, sprite, 0.1));
    //this.behaviors.push(new Velocity(this, 20, 10));
  }
  public function update (dt:Float) {
    for (behavior in this.behaviors) {
    	behavior.update(dt);
    }
  }
  public function draw () {
    //Text.display(this.x, this.y, this.text);
    for (behavior in this.behaviors) {
    	behavior.draw();
    }
    //Gfx.drawtile(this.x, this.y, "bug", 1);
  }
  public function add_behavior (behavior) {
  	this.behaviors.push(behavior);
  	//trace('added behavior ${behavior}');
  }
}

class Main {
  var entities = new Array();
  var player:Entity;
  var velocity:Velocity;
  var st:Float = 0; // for some reason Core.time here or in init() doesn't run in time to be valid for update(), so I set it to 0
  function init(){
    //this.titles = [];
    Layer.create("fg");
    Layer.attach("fg");

    Gfx.loadtiles("asteroid", 15, 15);
    Gfx.loadtiles("bug", 18, 34);
    Gfx.loadtiles("suit", 16, 17);
    Gfx.loadtiles("dust", 8, 8);
    Gfx.loadtiles("building", 32, 32);
    Gfx.loadtiles("ground", 64, 13);
		Gfx.clearcolor = Col.BLACK;

		Sound.load("jump");

		Core.showstats = true;

    this.player = new Entity(100, 0);
    new Animate(this.player, "suit", 0.4);
    this.velocity = new Velocity(this.player, 0, -40);
    new Wrap(this.player, 0, 0, Gfx.screenwidth, Gfx.screenheight);
    // NOTE: this causes crash when out of focus for 2 cycles (I think!)
    /*new Periodic(this.player, 1, function () { 
    	var d = new Entity(this.player.x + 4, this.player.y + 4);
    	new Animate(d, "dust", 0.2, true);
    	this.entities.unshift(d);
    	Sound.play("jump");
    });*/
    this.entities.push(this.player);

    for (i in [0,1,2,3,4]) {
	    var ground = new Entity(i * 64, Gfx.screenheight - 6);
	    new Animate(ground, "ground", 1);

	    var building = new Entity(i * 64 + 16, Gfx.screenheight - 20);
	    new Animate(building, "building", 1);
	    this.entities.push(building);
	    this.entities.push(ground);
    }

    Music.play("soundtrack");
		//Gfx.resizescreen(0, 0);
  	//Gui.setfont("default", 5);
  }
 
  function update() {
    var nt:Float = Core.time;
    var dt:Float = Math.min(nt - this.st, 1.0 / 30); // cap at 30 frames per second ... what will this do, I wonder?
    this.st = nt;

    Layer.drawto("fg");
    //Layer.move("bg", this.player.x, this.player.y);

    for (entity in this.entities) {
      entity.draw();
      entity.update(dt);

      if (!entity.alive) {
        this.entities.remove(entity);
      }
    }

    Filter.vcr = true;
    //Filter.blur = 2;

    if(Gui.button("SPIN")){
      //Layer.rotate("fg", Layer.getrotation("fg") + 1, Gfx.CENTER, Gfx.CENTER);
      /*
      var asteroid = new Entity(100, 0);
      new Animate(asteroid, "asteroid", 0.1);
      new Velocity(asteroid, 0, 30);
	    new Crop(asteroid, 0, 0, Gfx.screenwidth, Gfx.screenheight);
	    this.entities.push(asteroid);
	    */
    }

    this.velocity.y = Math.min(100, this.velocity.y + 100 * dt);

    if (Input.justpressed(Key.UP)) {
    	var d = new Entity(this.player.x + 4, this.player.y + 4);
    	new Animate(d, "dust", 0.2, true);
    	this.entities.unshift(d);
    	Sound.play("jump");

    	this.velocity.y = -100;
    }

    Gui.text("HP: <3 " + 10);
    //Gui.button("mute");
    //Gui.button("HELLO");
  }
}

