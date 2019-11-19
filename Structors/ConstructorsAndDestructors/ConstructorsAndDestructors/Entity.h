#pragma once
class Entity
{
	char name[30];
	int health;
	int attack;
	int defense;
public:
	Entity();

	Entity(const char * _name, int _health, int _attack, int _defense);

	~Entity();

	void stats();
};

