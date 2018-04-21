import haxegon.*;

class Behavior {
	var entity:Entity;
	public function new (entity) {
		this.entity = entity;
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
	public function new (entity, sprite, speed) {
		super(entity);
		this.sprite = sprite;
		this.frames = Gfx.numberoftiles(sprite);
		this.speed = speed;
	}
	public override function update (dt:Float) {
		this.time += dt;
		if (this.time >= this.speed) {
			this.time = 0;
			this.frame = (this.frame + 1) % this.frames;
		}
	}
	public override function draw () {
		Gfx.drawtile(this.entity.x, this.entity.y, this.sprite, this.frame);
	}
}

class Velocity extends Behavior {
	var x:Int;
	var y:Int;
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

class Entity {
  public var x:Float;
  public var y:Float;
  public var alive:Bool;
  var text:String;
  var behaviors:Array<Behavior> = new Array();
  public function new (x, y, sprite) {
    this.x = x;
    this.y = y;
    this.alive = true;
    this.behaviors.push(new Animate(this, sprite, 0.1));
    this.behaviors.push(new Velocity(this, 20, 10));
  }
  public function update (dt:Float) {
    if (this.y > 100) {
      this.alive = false;
    }
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
}

class Main {
  var entities = new Array();
  var st:Float = 0; // for some reason Core.time here or in init() doesn't run in time to be valid for update(), so I set it to 0
  function init(){
    //this.titles = [];
    Gfx.loadimage("asteroid");
    Gfx.loadtiles("bug", 18, 34);
  }
 
  function update() {
    var nt:Float = Core.time;
    var dt:Float = nt - this.st;
    this.st = nt;

    for (entity in this.entities) {
      entity.update(dt);
      entity.draw();

      if (!entity.alive) {
        this.entities.remove(entity);

      }
    }

    if (Input.justpressed(Key.ENTER)) {
      this.entities.push(new Entity(0, 0, "bug"));
    }
  }
}

