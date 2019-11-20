#pragma once
#include <string>
#include "Inventory.h"

using std::string;

class Item
{
	string name;
	enum Type
	{
		weapon,
		clothing,
		armor,
		artifact,
		potion
	};
	Type itemType;
	int damage;
	int defense;
	int heal;
	int quality;
	int value;
	
public:
	Item();
	Item(string nm, Type item, int val, int dam, int def, int hp, int qual);
	~Item();

};

