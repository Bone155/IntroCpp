#include "Tile.h"


Tile::Tile(string imageFilename)
{
	Background = LoadTexture("mapPack_tilesheet.png");
	tint = BLUE;
}

Tile::Tile()
{
}


Tile::~Tile()
{
}
