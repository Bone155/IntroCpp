#include "MyHero.h"

MyHero::MyHero()
{

}

MyHero::MyHero(string _name, string _text, int _age, int hp, int wealth)
{
	name = _name;
	text = _text;
	age = _age;
	HP = hp;
	money = wealth;
}

MyHero::~MyHero()
{
}

MyHero MyHero::operator+=(Potion & potion)
{
	this->HP += potion.HPMod;
	return *this;
}
