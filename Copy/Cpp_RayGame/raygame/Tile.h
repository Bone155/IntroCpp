#pragma once
#include <string>
#include <iostream>
#include "raylib.h"

using std::string;

class Tile
{
public:
	bool masterTile = true;
	Vector2 position;
	Texture2D Background;
	Color tint;
	Tile(string imageFilename);
	Tile();
	~Tile();
};
