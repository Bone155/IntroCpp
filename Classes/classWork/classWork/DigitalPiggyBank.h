#pragma once

class DigitalPiggyBank
{
	float currentBalance = 0;

public:
	DigitalPiggyBank();
	~DigitalPiggyBank();

	void Deposit(float net);

	float withdraw();

	float balance();
};

