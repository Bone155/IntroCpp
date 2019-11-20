#include "Potion.h"
#include <string>

using namespace std;


Potion::Potion()
{
	HPMod = 5;
}

Potion::Potion(string _name, int hpMod, int _quality, int _date)
{
	name = _name;
	HPMod = hpMod;
	quality = _quality;
	date = _date;
}


Potion::~Potion()
{
}
