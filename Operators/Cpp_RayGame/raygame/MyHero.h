#pragma once
#include <string>
#include "Potion.h"
#include "Inventory.h"

using std::string;

class MyHero
{
	string name;
public:
	MyHero();
	MyHero(string _name, string _text, int _age, int hp, int wealth);
	~MyHero();

	MyHero operator += (Potion & potion);

	string text;
	int age;
	int HP;
	int money;
};

