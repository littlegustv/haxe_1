import haxegon.*;

class Behavior {
	var entity:Entity;
	public function new (entity, ?update:Float->Void) {
		this.entity = entity;
		this.entity.add_behavior(this);
	}
	public function update(dt:Float) {
	}
	public function draw() {
	}
}


class Tween extends Behavior {
  var start:Array<Float> = [];
  var goals:Array<Float> = [];
  var fields:Array<String> = [];
  var rate:Float = 1;
  var time:Float = 0;
  var ease:String;
  var object:Dynamic;
  var callback:Void->Void;
  public function new(entity, fields:Array<String>, goals:Array<Float>, ?ease:String = "linear", ?rate:Float = 1, ?callback:Void->Void = null) {
    super(entity);
    this.fields = fields;
    this.goals = goals;
    this.rate = rate;
    this.ease = ease;
    this.callback = callback;
    for (i in 0...this.fields.length) {
      this.start.push(Reflect.field(this.entity, this.fields[i]));
    }
  }
  public override function update(dt:Float) {
    this.time += this.rate * dt;
    if (this.time >= 1) {
      for (i in 0...this.fields.length) {
        Reflect.setField(this.entity, this.fields[i], this.goals[i]);
      }
      if (this.callback != null) {
        this.callback();
      }
      this.entity.remove_behavior(this);
    } else {
      var t = Reflect.callMethod(this, Reflect.field(this, this.ease), [this.time]);
      for (i in 0...this.fields.length) {
        Reflect.setField(this.entity, this.fields[i], this.start[i] + t * (this.goals[i] - this.start[i]));
      }
    }

  }
  @:keep public function linear(t:Float) { return t; }
  @:keep public function easeInQuad(t:Float) { return t*t; }
  @:keep public function easeOutQuad (t:Float) { return t*(2-t); }
  @:keep public function easeInOutQuad (t:Float) { return t<.5 ? 2*t*t : -1+(4-2*t)*t; }
  @:keep public function easeInCubic (t:Float) { return t*t*t; }
  @:keep public function easeOutCubic (t:Float) { return (--t)*t*t+1; }
  @:keep public function easeInOutCubic (t:Float) { return t<.5 ? 4*t*t*t : (t-1)*(2*t-2)*(2*t-2)+1; }
  @:keep public function easeInQuart (t:Float) { return t*t*t*t; }
  @:keep public function easeOutQuart (t:Float) { return 1-(--t)*t*t*t; }
  @:keep public function easeInOutQuart (t:Float) { return t<.5 ? 8*t*t*t*t : 1-8*(--t)*t*t*t; }
  @:keep public function easeInQuint (t:Float) { return t*t*t*t*t; }
  @:keep public function easeOutQuint (t:Float) { return 1+(--t)*t*t*t*t; }
  @:keep public function easeInOutQuint (t:Float) { return t<.5 ? 16*t*t*t*t*t : 1+16*(--t)*t*t*t*t; }
  @:keep public function easeInElastic (t:Float) { return (.04 - .04 / t) * Math.sin(25 * t) + 1; }
  @:keep public function easeOutElastic (t:Float) { return .04 * t / (--t) * Math.sin(25 * t); }
  @:keep public function easeInOutElastic (t:Float) { return (t -= .5) < 0 ? (.02 + .01 / t) * Math.sin(50 * t) : (.02 - .01 / t) * Math.sin(50 * t) + 1; }
  @:keep public function easeInSin (t) { return 1 + Math.sin(Math.PI / 2 * t - Math.PI / 2);  }
  @:keep public function easeOutSin (t) { return Math.sin(Math.PI / 2 * t); }
  @:keep public function easeInOutSin (t) { return (1 + Math.sin(Math.PI * t - Math.PI / 2)) / 2; }
}

/* custom arachno specific behavior*/

class Crawl extends Behavior {
  var grid:Array<Array<Int>>;
  var direction = [1, 0];
  var turn:Int = 1;
  var time:Float = 0.0;
  var interval:Float = 0.5;
  var start = new Array();
  var goal = new Array();
  var jumping:Bool = false;
  var onjump:Void->Void;
  var onland:Void->Void;
  public var jump:Bool = false;
  public var pause:Bool = false;

  public function new (entity, grid, interval, ?direction:Array<Int>, ?turn:Int = 1, ?onjump:Void->Void, ?onland:Void->Void) {
    super(entity);
    this.interval = interval;
    this.grid = grid;
    this.goal = [this.entity.x, this.entity.y, this.entity.angle];
    this.start = [this.entity.x, this.entity.y, this.entity.angle];
    if (direction != null){
      this.direction = direction;      
    }
    this.turn = turn;
    this.onjump = onjump;
    this.onland = onland;
  }

  public function togrid(x:Float, y:Float) {
    return [Math.floor(x / 16), Math.floor(y / 16)];
  }

  public override function update(dt) {
    this.time += dt;
    if (this.time > this.interval) {
      
      // reset
      this.entity.x = this.goal[0];
      this.entity.y = this.goal[1];
      this.entity.angle = this.goal[2];
      
      if (this.jumping) {
        this.jumping = false;
        this.onland();
      }

      if (this.pause) {
        // do nothing
        return;
      }
      
      var normal = [Math.round(Geom.cos(this.entity.angle - 90)), Math.round(Geom.sin(this.entity.angle - 90))];
      this.start = [this.entity.x, this.entity.y, this.entity.angle];
      this.time = 0;      
      
      var g = this.togrid(this.entity.x, this.entity.y);
      
      if (this.jump) {
        for (i in 1...4) {
          if (this.grid[g[0] + normal[0] * i] != null && this.grid[g[0] + normal[0] * i][g[1] + normal[1] * i] != 0 && this.grid[g[0] + normal[0] * i][g[1] + normal[1] * i] != null) {
            // JUMP
            this.goal = [this.entity.x + (i - 1) * normal[0] * 16, this.entity.y + (i - 1) * normal[1] * 16, this.entity.angle + 180];
            this.turn *= -1;
            this.jumping = true;            
            this.onjump();
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
      this.entity.angle = this.start[2] + (this.time / this.interval) * (this.goal[2] - this.start[2]);
      //this.entity.x = this.start[0] + (Math.round(2 * (this.time / this.interval)) / 2) * (this.goal[0] - this.start[0]);
      //this.entity.y = this.start[1] + (Math.round(2 * (this.time / this.interval)) / 2) * (this.goal[1] - this.start[1]);
      //this.entity.angle = this.start[2] + (Math.round(2 * (this.time / this.interval)) / 2) * (this.goal[2] - this.start[2]);
    }
  }

  public override function draw () {
    if (this.pause) {
      var g = this.togrid(this.goal[0], this.goal[1]);
      var normal = [Math.round(Geom.cos(this.goal[2] - 90)), Math.round(Geom.sin(this.goal[2] - 90))];
      for (i in 1...4) {
        if (this.grid[g[0] + normal[0] * i] != null && this.grid[g[0] + normal[0] * i][g[1] + normal[1] * i] != null && this.grid[g[0] + normal[0] * i][g[1] + normal[1] * i] != 0) {
          //Gfx.drawbox(this.entity.x + normal[0] * (i - 1) * 16 - 8, this.entity.y + normal[1] * (i - 1) * 16 - 8, 16, 16, Col.GREEN);
          Gfx.rotation(Geom.atan2(this.direction[1], this.direction[0]) + 90, 8, 8);
          Gfx.drawtile(this.goal[0] + normal[0] * (i - 1) * 16 - 8, this.goal[1] + normal[1] * (i - 1) * 16 - 8, "indicators", 0);
          
          return;
        }
      }
      Gfx.drawtile(this.goal[0] + normal[0] * 16 - 8, this.goal[1] + normal[1] * 16 - 8, "indicators", 1);
      Gfx.rotation(0);
    }
  }

}
/*
custom 'batfax' specific behavior...

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

*/

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
  var frames:Int;
  var speed:Float;
  var time:Float = 0;
	var remove:Bool;
  var frame:Int = 0;
  var paused:Bool = false;
  public var sprite:String;
	public function new (entity, sprite, speed, remove:Bool = false) {
		super(entity);
		this.sprite = sprite;
		this.frames = Gfx.numberoftiles(sprite);
		this.speed = speed;
		this.remove = remove;
	}
	public override function update (dt:Float) {
		if (this.paused) return;
    this.time += dt;
		if (this.time >= this.speed) {
			this.time = 0;
			this.frame = this.frame + 1;
			if (this.frame >= this.frames) {
				if (this.remove) this.entity.alive = false;
        else this.frame = this.frame % this.frames;
			} 
		}
	}
	public override function draw () {
    Gfx.rotation(this.entity.angle, this.entity.w / 2, this.entity.h / 2);
    Gfx.drawtile(Math.round(this.entity.x - this.entity.w / 2), Math.round(this.entity.y - this.entity.h / 2), this.sprite, this.frame);
    Gfx.rotation(0);
	}
  public function stop() {
    this.frame = 0;
    this.paused = true;
    this.time = 0;
  }
  public function resume() {
    this.paused = false;
  }
  public function pause () {
    this.paused = true;
  }
}

class TileMap extends Behavior {
	var map:Array<Int>;
	var tileset:String;
	var sprite:String;
	var h:Int;
	var w:Int;
	public function new (entity, data, tileset, name) {
		super(entity);
		this.tileset = tileset;
		this.map = data.data;
		this.w = data.width;
		this.h = data.height;
		this.sprite = name;
		Gfx.createimage(name, this.w * 16, this.h * 16);
		Gfx.drawtoimage(name);
		Gfx.imagealpha = data.opacity;
		for (i in 0...this.w) {
			for (j in 0...this.h) {
				if (this.map[i + j * this.w] > 0) {
					Gfx.drawtile(this.entity.x + i * 16, this.entity.y + j * 16, this.tileset, this.map[i + j * this.w] - 1);
				}
			}
		}
		Gfx.resetalpha();
		Gfx.drawtoscreen();
	}
	public override function draw () {
		Gfx.drawimage(this.entity.x, this.entity.y, this.sprite);
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
  public var angle:Float;
	public function new(entity, ?x:Float = 0, ?y:Float = 0, ?angle:Float = 0) {
		super(entity);
		this.x = x;
		this.y = y;
    this.angle = angle;
	}
	public override function update (dt:Float) {
		this.entity.x += this.x * dt;
		this.entity.y += this.y * dt;
    this.entity.angle += this.angle * dt;
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
  public function new (x:Float, y:Float, ?w:Int = 16, ?h:Int = 16, ?angle:Float = 0, ?callback:Raindrop.Entity->Void) {
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
