#include"Grid.hpp"

// initialize each tile of grid in constructor as well as pushes nullptr for each pokemon
Grid::Grid(int x, int y, int w = 70, int h = 80, int rows = 5, int cols = 9)
  : startX(x), startY(y), tileWidth(w), tileHeight(h), numRows(rows), numCols(cols)
{
  for (int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      tiles.pushback({x + (w * j), y + (h * i), w, h});
      pokemons.pushback(nullptr);
    }
  }
}