#pragma once
#include "Item.h"

class Inventory
{

public:
	Inventory();
	~Inventory();

	Inventory operator+ (Item & item);
	Inventory operator- (Item & item);
	
	Inventory operator+= (Item & item);
	Inventory operator-= (Item & item);

	Item* items[30];
	int itemCounter = 0;
	int maxItems = 30;
	bool org = false;
};

