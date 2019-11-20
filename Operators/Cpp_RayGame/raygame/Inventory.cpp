#include "Inventory.h"


Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

Inventory Inventory::operator+(Item & item)
{
	Inventory temp;
	if (itemCounter < (maxItems - 1)) {
		temp.items[itemCounter] = &item;
		itemCounter++;
	}
	return temp;
}

Inventory Inventory::operator-(Item & item)
{
	Inventory temp;
	for (int i = 0; i < maxItems; i++) {
		if (temp.items[i] == &item) {
			org = true;
		}
		if (org){
		}
			items[i] = items[i + 1];
	}
	itemCounter--;
	return temp;
}

Inventory Inventory::operator+=(Item & item)
{
	*this += item;
	return *this;
}

Inventory Inventory::operator-=(Item & item)
{
	*this -= item;
	return *this;
}
