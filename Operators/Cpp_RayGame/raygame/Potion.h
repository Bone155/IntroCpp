#pragma once
#include <string>

using std::string;

class Potion
{
	string name;
public:
	Potion();
	Potion(string _name, int hpMod, int _quality, int _date);
	~Potion();

	int HPMod;
	int quality;
	int date;
};

