import haxegon.*;

class Main {
  var entities = new Array();
  var enemies = new Array();
  var player:Raindrop.Entity;
  var grid = new Array();

  var direction = [1, 0];

  var turn:Int = 1;

  var st:Float = 0.0;
  var time:Float = 0.0;
  var interval:Float = 0.25;

  var start = new Array();
  var goal = new Array();

  var jump:Bool = false;

  public function togrid(x:Float, y:Float) {
    return [Math.floor(x / 16), Math.floor(y / 16)];
  }

  function init(){

		Gfx.clearcolor = Col.BLACK;
    Gfx.loadtiles("spider", 18, 16);
    Gfx.loadtiles("tile", 16, 16);

    this.grid = new Array();
    for (i in 0...20) {
      var row = new Array();
      this.grid.push(row);
      for (j in 0...20) {
        var cell = 0;
        //if (i >= 5 && i <= 15 && j == 5) {
        if (i >= 5 && i <= 15) {
          cell = Random.pick([0, 0, 0, 1]);
          //cell = 1;
        }
        row.push(cell);
        if (cell == 1) {
          var tile = new Raindrop.Entity(i * 16, j * 16);
          new Raindrop.Animate(tile, "tile", 1);
          this.entities.push(tile);

          if (this.player == null && this.grid[i][j - 1] == 0) {
            this.player = new Raindrop.Entity(i * 16, (j - 1) * 16);
            new Raindrop.Animate(this.player, "spider", 0.1);
            this.entities.push(this.player);
          }
        }
      }
    }    
    this.goal = [this.player.x, this.player.y, this.player.angle];
    this.start = [this.player.x, this.player.y, this.player.angle];
  }
 
  function update() {
    var nt:Float = Core.time;
    var dt:Float = Math.min(nt - this.st, 1.0 / 30); // cap at 30 frames per second ... what will this do, I wonder?
    this.st = nt;

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


    if (Input.justpressed(Key.SPACE)) {
      this.jump = true;
      //this.direction = [-this.direction[0], -this.direction[1]];
      //this.turn *= -1;
    }

    this.time += dt;
    if (this.time > this.interval) {
      this.time = 0;
      this.player.x = this.goal[0];
      this.player.y = this.goal[1];
      this.player.angle = this.goal[2];
      this.start = [this.player.x, this.player.y, this.player.angle];
      var g = this.togrid(this.player.x, this.player.y);
      // var normal = ...
      // no barrier
      // need to add orientation (i.e. angle) as WELL as direction      
      var normal = [Math.round(Geom.cos(this.player.angle - 90)), Math.round(Geom.sin(this.player.angle - 90))];
      //trace('${this.direction[0]}, ${this.direction[1]} :: ${normal[0]}, ${normal[1]} :: ${this.turn}');
      if (this.jump) {
        for (i in 1...4) {
          if (this.grid[g[0] + normal[0] * i] != null && this.grid[g[0] + normal[0] * i][g[1] + normal[1] * i] == 1) {
            //this.player.angle += 180;
            this.goal = [this.player.x + (i - 1) * normal[0] * 16, this.player.y + (i - 1) * normal[1] * 16, this.player.angle + 180];
            this.turn *= -1;
            break;
          }
        }
        this.jump = false;
      } else if (this.grid[g[0] + this.direction[0]] != null && this.grid[g[0] + this.direction[0]][g[1] + this.direction[1]] == 0) {
        // if floor (check negative normal?)
        if (this.grid[g[0] + this.direction[0] - normal[0]] != null && this.grid[g[0] + this.direction[0] - normal[0]][g[1] + this.direction[1] - normal[1]] == 1) {
          //this.player.x += 16 * this.direction[0];
          //this.player.y += 16 * this.direction[1];
          this.goal = [this.player.x + 16 * this.direction[0], this.player.y + 16 * this.direction[1], this.player.angle];
          //trace('flat');
          // direction is not changed
        }
        // otherwise, rotate
        else {
          //trace('outer');
          //this.player.x += (this.direction[0] - normal[0]) * 16;
          //this.player.y += (this.direction[1] - normal[1]) * 16;
          this.goal = [this.player.x + 16 * (this.direction[0] - normal[0]), this.player.y + 16 *(this.direction[1] - normal[1]),  this.player.angle + this.turn * 90];

          this.direction = [-1 * this.turn * this.direction[1], this.turn * this.direction[0]];
          //this.direction = [-normal[0], -normal[1]];
          //this.player.angle += this.turn * 90; // this will be a problem - - > depends on direction, no?
          //this.player.angle ...
        }
      } else {
        //trace('inner');
        //this.player.angle -= this.turn * 90;
        this.goal = [this.player.x, this.player.y, this.player.angle - this.turn * 90];
        this.direction = [this.turn * this.direction[1], -1 * this.turn * this.direction[0]];
        //this.direction = [normal[0], normal[1]];
        //this.player.angle  ...
      }
    } else {
      this.player.x = this.start[0] + (this.time / this.interval) * (this.goal[0] - this.start[0]);
      this.player.y = this.start[1] + (this.time / this.interval) * (this.goal[1] - this.start[1]);
      this.player.angle = this.start[2] + (this.time / this.interval) * (this.goal[2] - this.start[2]);
    }

  }
}

