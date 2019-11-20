#include "Tile.h"


Tile::Tile(string imageFilename)
{
	Image img = LoadImage(reinterpret_cast<char*>(&imageFilename));
	Background = LoadTextureFromImage(img);
	tint = BLUE;
}

Tile::Tile()
{
}

Tile::~Tile()
{
}
