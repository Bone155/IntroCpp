#include <iostream>
#include "hero.h"
#include "Entity.h"

using namespace std;

void showScope()
{
	hero ironMan = { "Iron Man" };
}

int main() {

	hero terry;
	hero george = { "George" };
	showScope();
	cout << endl;

	char name[30];
	int health;
	int attack;
	int defense;

	Entity un;
	un.stats();
	cout << endl;

	cout << "Enter your first and last name" << endl;
	cin.getline(name, 30);
	cout << endl;
	cout << "Enter health, attack, and defense (must be no less than 5 but no greater than 8)" << endl;
	cin >> health >> attack >> defense;
	cout << endl;

	Entity alex = {name, health, attack, defense};
	alex.stats();

	while (true) {};
	return 0;
}