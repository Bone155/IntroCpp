#pragma once

class hero
{
	char myName[16];
public:
	hero();

	hero(const char * name);
	
	~hero();

	void status();
};

