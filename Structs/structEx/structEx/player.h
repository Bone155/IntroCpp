#pragma once
#include "vector2.h"
#include <iostream>

using namespace std;

struct Player {
	char name[100];
	int health;
	int score;
	Vector2 position;
	Vector2 velocity;
};

struct Rect {
	Vector2 TL;
	Vector2 TR;
	Vector2 BR;
	Vector2 BL;
	int R;
	int G;
	int B;
};

void printPlayerInfo(Player* player);
void fivePlayers(Player names[], size_t length);
void printPlayers(Player players[], size_t length);