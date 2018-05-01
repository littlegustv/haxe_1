import haxegon.*;

class Main {
  var entities = new Array();
  var enemies = new Array();
  var player:Raindrop.Entity;
  var grid = new Array();
  var st:Float = 0.0;

  var crawl:Raindrop.Crawl;

  function init(){

		Gfx.clearcolor = Col.BLACK;
    Gfx.loadtiles("spider", 18, 16);
    Gfx.loadtiles("ghost", 16, 16);
    Gfx.loadtiles("tile", 16, 16);

    var picked = false;

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
          this.entities.unshift(tile);

          if (this.player == null && this.grid[i][j - 1] == 0) {
            this.player = new Raindrop.Entity(i * 16, (j - 1) * 16);
            new Raindrop.Animate(this.player, "spider", 0.1);
            this.entities.push(this.player);
          } else if (picked == false && this.grid[i][j - 1] == 0) {
            var e = new Raindrop.Entity(i * 16, (j - 1) * 16);
            new Raindrop.Animate(e, "ghost", 0.1);
            new Raindrop.Crawl(e, this.grid, 0.5);
            this.entities.push(e);
            this.enemies.push(e);
            picked = true;
          }
        }
      }
    }    
    this.crawl = new Raindrop.Crawl(this.player, this.grid, 0.5);
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
      this.crawl.pause = true;
      //this.direction = [-this.direction[0], -this.direction[1]];
      //this.turn *= -1;
    }
    if (Input.justreleased(Key.SPACE)) {
      this.crawl.pause = false;
      this.crawl.jump = true;
    }
  }
}

