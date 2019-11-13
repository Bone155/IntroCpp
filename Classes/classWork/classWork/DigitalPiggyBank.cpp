#include "DigitalPiggyBank.h"



DigitalPiggyBank::DigitalPiggyBank()
{
}


DigitalPiggyBank::~DigitalPiggyBank()
{
}

void DigitalPiggyBank::Deposit(float net)
{
	currentBalance += net;
}

float DigitalPiggyBank::withdraw()
{
	currentBalance -= currentBalance;
	return currentBalance;
}

float DigitalPiggyBank::balance()
{
	return currentBalance;
}
