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

class Beam extends Behavior {
	var time:Float;
	var interval:Float;
	var callback:Void->Void;
	var direction:Int;
	public function new (entity, interval, direction, callback) {
		super(entity);
		this.time = 0;
		this.direction = direction;
		this.interval = interval;
		this.callback = callback;
	}
	public override function update(dt) {
		this.time += dt;
		if (this.time > this.interval) {
			this.callback();
			this.entity.remove_behavior(this);
		}
	}
	public override function draw () {
		var h:Float = 16 * this.time / this.interval;
		var x = this.direction * Gfx.screenwidth + this.entity.x + 8;
		var y = this.entity.y + 8 - h / 2;
		Gfx.fillbox(x, y, Gfx.screenwidth, h, Col.WHITE, this.time / this.interval);
	}
}

class Animate extends Behavior {
	var frame:Int = 0;
	var frames:Int;
	var speed:Float;
	var time:Float = 0;
	public var sprite:String;
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
  	this.behaviors.unshift(behavior);
  	//trace('added behavior ${behavior}');
  }
  public function remove_behavior (behavior) {
  	this.behaviors.remove(behavior);
  }
}
