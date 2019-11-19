#include "Entity.h"
#include <iostream>


Entity::Entity()
{
	strcpy_s(name, sizeof(name), "Unknown");
	health = 5;
	attack = 7;
	defense = 8;
}

Entity::Entity(const char * _name, int _health, int _attack, int _defense)
{
	strcpy_s(name, sizeof(name), _name);
	health = _health;
	attack = _attack;
	defense = _defense;
	if (health < 5)
		health = 5;
	if (health > 8)
		health = 8;
	if (attack < 5)
		attack = 5;
	if (attack > 8)
		attack = 8;
	if (defense < 5)
		defense = 5;
	if (defense > 8)
		defense = 8;
}


Entity::~Entity()
{
}

void Entity::stats()
{
	std::cout << name << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "Attack: " << attack << std::endl;
	std::cout << "Defense: " << defense << std::endl;
}
