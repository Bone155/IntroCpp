#include <iostream>
#include "person.h"
#include "player.h"

void example();

int main() {
	//example();
	Player players[5];
	
	fivePlayers(players, 5);
	printPlayers(players, 5);
	cout << endl;

	return system("pause");
}

void example() {

	person jon;

	jon.age = 26;
	jon.cash = 52.7;
	jon.killCount = 22;

	cout << "jon's had " << jon.cash << " GBP" << endl;
	cout << endl;


	float withdraw = getMoney(&jon, 100);

	cout << "jon's has " << jon.cash << " GBP" << endl;
	cout << endl;

	person* someone = &jon;
	erasePerson(&someone);

	if (someone == nullptr) {
		cout << "Someone got erased!\n";
	}
	else {
		cout << "Someone is there.\n";
	}
	cout << endl;


}