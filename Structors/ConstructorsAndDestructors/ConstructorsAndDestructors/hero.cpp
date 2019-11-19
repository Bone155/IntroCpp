#include "hero.h"
#include <iostream>


hero::hero()
{
	strcpy_s(myName, sizeof(myName), "DefaultName");
	status();
}

hero::hero(const char * name)
{
	strcpy_s(myName, sizeof(myName), name);
	status();
}

hero::~hero()
{
	std::cout << myName << " just died" << std::endl;
}

void hero::status()
{
	std::cout << myName << " was just born" << std::endl;
}
