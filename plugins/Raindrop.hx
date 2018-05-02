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

class Crawl extends Behavior {
  var grid:Array<Array<Int>>;
  var direction = [1, 0];
  var turn:Int = 1;
  var time:Float = 0.0;
  var interval:Float = 0.5;
  var start = new Array();
  var goal = new Array();
  public var jump:Bool = false;
  public var pause:Bool = false;

  public function new (entity, grid, interval) {
    super(entity);
    this.interval = interval;
    this.grid = grid;
    this.goal = [this.entity.x, this.entity.y, this.entity.angle];
    this.start = [this.entity.x, this.entity.y, this.entity.angle];
  }

  public function togrid(x:Float, y:Float) {
    return [Math.floor(x / 16), Math.floor(y / 16)];
  }

  public override function update(dt) {
    this.time += dt;
    if (this.time > this.interval) {
      
      // reset
      this.time = 0;      
      this.entity.x = this.goal[0];
      this.entity.y = this.goal[1];
      this.entity.angle = this.goal[2];
      this.start = [this.entity.x, this.entity.y, this.entity.angle];
      
      var g = this.togrid(this.entity.x, this.entity.y);
      var normal = [Math.round(Geom.cos(this.entity.angle - 90)), Math.round(Geom.sin(this.entity.angle - 90))];
      
      if (this.pause) {
        // do nothing
      }
      else if (this.jump) {
        for (i in 1...4) {
          if (this.grid[g[0] + normal[0] * i] != null && this.grid[g[0] + normal[0] * i][g[1] + normal[1] * i] != 0) {
            // JUMP
            this.goal = [this.entity.x + (i - 1) * normal[0] * 16, this.entity.y + (i - 1) * normal[1] * 16, this.entity.angle + 180];
            this.turn *= -1;
            break;
          }
        }
        this.jump = false;
      } else if (this.grid[g[0] + this.direction[0]] != null && this.grid[g[0] + this.direction[0]][g[1] + this.direction[1]] == 0) {
        if (this.grid[g[0] + this.direction[0] - normal[0]] != null && this.grid[g[0] + this.direction[0] - normal[0]][g[1] + this.direction[1] - normal[1]] != 0) {
          // FLAT
          this.goal = [this.entity.x + 16 * this.direction[0], this.entity.y + 16 * this.direction[1], this.entity.angle];
        }
        else {
          // OUTER TURN
          this.goal = [this.entity.x + 16 * (this.direction[0] - normal[0]), this.entity.y + 16 *(this.direction[1] - normal[1]),  this.entity.angle + this.turn * 90];
          this.direction = [-1 * this.turn * this.direction[1], this.turn * this.direction[0]];
        }
      } else {
        // INNER TURN
        this.goal = [this.entity.x, this.entity.y, this.entity.angle - this.turn * 90];
        this.direction = [this.turn * this.direction[1], -1 * this.turn * this.direction[0]];
      }
    } else {
      this.entity.x = this.start[0] + (this.time / this.interval) * (this.goal[0] - this.start[0]);
      this.entity.y = this.start[1] + (this.time / this.interval) * (this.goal[1] - this.start[1]);
      
      //this.entity.x = this.start[0] + (Math.round(2 * (this.time / this.interval)) / 2) * (this.goal[0] - this.start[0]);
      //this.entity.y = this.start[1] + (Math.round(2 * (this.time / this.interval)) / 2) * (this.goal[1] - this.start[1]);
      this.entity.angle = this.start[2] + (Math.round(2 * (this.time / this.interval)) / 2) * (this.goal[2] - this.start[2]);
    }
  }

}

class Lerp extends Behavior {
  var time:Float;
  var rate:Float;
  var x:Float;
  var y:Float;
  var callback:Raindrop.Entity->Void;
  //var angle:Float;
  var alpha:Float;
  public function new (entity, rate:Float, ?x:Float, ?y:Float, ?alpha:Float, ?callback:Raindrop.Entity->Void) {
    super(entity);
    this.time = 0;
    this.rate = rate;
    this.x = if (x != null) x else this.entity.x;
    this.y = if (y != null) y else this.entity.y;
    this.alpha = if (alpha != null) alpha else this.entity.alpha;
  }
  public override function update(dt:Float) {
    this.time += this.rate * dt;
    if (this.time >= 1) {
      this.entity.x = this.x;
      this.entity.y = this.y;
      this.entity.alpha = this.alpha;
      this.entity.remove_behavior(this);
      if (this.callback != null) this.callback(this.entity);
    } else {
      this.entity.x = this.lerp(this.entity.x, this.x, this.time);
      this.entity.y = this.lerp(this.entity.y, this.y, this.time);
      this.entity.alpha = this.lerp(this.entity.alpha, this.alpha, this.time);
    }
  }
  private function lerp(start:Float, end:Float, time:Float) {
    return (1 - time) * start + time * end;
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

class TextBox extends Behavior {
  var text:String;
  var size:Float;
  var color:Int;
  var align:Int;
  var alpha:Float;
  //var font:String;
  public function new (entity, text:String, color:Int = 0, size:Float = 12.0, align:Int = 0, alpha:Float = 1) {//, ?font:String = "default")
    super(entity);
    this.text = text;
    this.size = size;
    this.color = color;
    this.align = align;
  }
  public override function draw () {
    //Text.size = this.size;
    Text.display(this.entity.x, this.entity.y, this.text, this.color, this.entity.alpha);
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
				this.frame = this.frame % this.frames;
			} 
		}
	}
	public override function draw () {
    Gfx.rotation(this.entity.angle, this.entity.w / 2, this.entity.h / 2);
		Gfx.drawtile(Math.round(this.entity.x - this.entity.w / 2), Math.round(this.entity.y - this.entity.h / 2), this.sprite, this.frame);
	}
}
class Tile extends Behavior {
	public var sprite:String;
	var w:Int;
	var h:Int;
	public function new (entity, sprite, w, h) {
		super(entity);
		this.sprite = sprite;
		this.w = w;
		this.h = h;
	}
	public override function draw () {
		for (i in 0...Math.ceil(this.w / Gfx.imagewidth(this.sprite))) {
			for (j in 0...Math.ceil(this.h / Gfx.imageheight(this.sprite))) {
				Gfx.drawtile(Math.round(this.entity.x) + i * Gfx.imagewidth(this.sprite), Math.round(this.entity.y) + j * Gfx.imageheight(this.sprite), this.sprite, 0);
			}	
		}
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

class Bounce extends Behavior {
  var minx:Int;
  var maxx:Int;
  var miny:Int;
  var maxy:Int;
  var r:Float;
  var velocity:Raindrop.Velocity;
  public function new(entity, minx, miny, maxx, maxy, velocity:Raindrop.Velocity, ?r:Float) {
    super(entity);
    this.minx = minx;
    this.miny = miny;
    this.maxx = maxx;
    this.maxy = maxy;
    this.velocity = velocity;
    this.r = if (r != null) r else 1;
  }
  public override function update(dt) {
    if (this.entity.x > this.maxx || this.entity.x < this.minx) {
      this.velocity.x *= -1 * this.r;
      this.entity.x = Geom.clamp(this.entity.x, this.minx, this.maxx);
    }
    if (this.entity.y > this.maxy || this.entity.y < this.miny) {
      this.velocity.y *= -1 * this.r;
      this.entity.y = Geom.clamp(this.entity.y, this.miny, this.maxy);
    }
  }
}


class Periodic extends Behavior {
	var time:Float;
	var callback:Raindrop.Entity->Void;
	var interval:Float;
  var repeat:Bool;
	public function new(entity, interval, callback:Raindrop.Entity->Void, repeat:Bool = true) {
		super(entity);
		this.time = 0;
		this.interval = interval;
		this.callback = callback;
    this.repeat = repeat;
	}
	public override function update (dt) {
		this.time += dt;
		if (this.time >= this.interval) {
      this.callback(this.entity);
      if (this.repeat) {
  			this.time = 0;      
      } else {
        this.entity.remove_behavior(this);
      }
		}
	}
}

class Entity {
  public var x:Float;
  public var y:Float;
  public var w:Int;
  public var h:Int;
  public var alpha:Float;
  public var angle:Float;
  public var alive:Bool;
  var text:String;
  var callback:Raindrop.Entity->Void;
  var behaviors:Array<Behavior> = new Array();
  public function new (x, y, ?w = 16, ?h = 16, ?angle = 0, ?callback:Raindrop.Entity->Void) {
    this.x = x;
    this.y = y;
    this.w = w;
    this.h = h;
    this.alpha = 1.0;
    this.angle = angle;
    this.alive = true;
    this.callback = callback;
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
  public function die () {
    this.alive = false;
    if (this.callback != null) {
      this.callback(this);
    }
  }
}
