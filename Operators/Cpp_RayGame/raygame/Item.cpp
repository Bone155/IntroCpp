#include "Item.h"


Item::Item()
{
}

Item::Item(string nm, Type item, int val, int dam, int def, int hp, int qual)
{
	name = nm;
	switch (item)
	{
		case weapon:
			value = val;
			break;
		case clothing:
			value = val;
			break;
		case armor:
			value = val;
		case artifact:
			value = val;
		case potion:
			value = val;
		default:
			break;
	}
	damage = dam;
	defense = def;
	heal = hp;
	quality = qual;
}


Item::~Item()
{
}

