import haxegon.*;

class Main {
  var entities = new Array();
  var enemies = new Array();
  var player:Raindrop.Entity;
  var grid = new Array();

  var st:Float = 0.0;

  public function togrid(x:Float, y:Float) {
    return [Math.floor(x / 16), Math.floor(y / 16)];
  }

  function init(){

		Gfx.clearcolor = Col.BLACK;
    Gfx.loadtiles("spider", 16, 16);
    Gfx.loadtiles("tile", 16, 16);

    this.grid = new Array();
    for (i in 0...20) {
      var row = new Array();
      this.grid.push(row);
      for (j in 0...20) {
        var cell = Random.pick([0, 0, 0, 1]);
        row.push(cell);
        if (cell == 1) {
          var tile = new Raindrop.Entity(i * 16, j * 16);
          new Raindrop.Animate(tile, "tile", 1);
          this.entities.push(tile);

          if (this.player == null && this.grid[i][j - 1] == 0) {
            this.player = new Raindrop.Entity(i * 16, (j - 1) * 16);
            new Raindrop.Animate(this.player, "spider", 0.5);
            this.entities.push(this.player);
          }
        }
      }
    }


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

    // controls
    
    if (Input.justpressed(Key.RIGHT)) {
      var g = this.togrid(this.player.x, this.player.y);
      // var normal = ...
      // no barrier
      if (this.grid[g[0] + 1] != null && this.grid[g[0] + 1][g[1]] == 0) {
        // if floor
        if (this.grid[g[0] + 1] != null && this.grid[g[0] + 1][g[1] + 1] == 1) {
          this.player.x += 16;
        }
        // otherwise, rotate
        else {
          this.player.x += 16;
          this.player.y += 16;
          //this.player.angle ...
        }
      } else {
        //this.player.angle  ...
      }
    }
    if (Input.justpressed(Key.LEFT)) {
      this.player.angle -= 90;
    }
  }
}

