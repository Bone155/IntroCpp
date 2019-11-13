#include "player.h"

void printPlayerInfo(Player* player) {
	char* name = player->name;
	int score = player->score;
	cout << name << " has a score of " << score << endl;
}

void printPlayers(Player players[], size_t length) {
	for (int i = 0; i < length; i++) {
		char* name = players[i].name;
		int* score = &players[i].score;
		cout << name << " has a score of " << score << endl;
	}
}

void fivePlayers(Player names[], size_t length) {
	for (int i = 0; i < length; i++) {
		cout << "Enter your name" << endl;
		char* name = names[i].name;
		cin.getline(name, 100);
		cout << endl << "Enter your score" << endl;
		int* score = &names[i].score;
		cin >> *score;
		cout << endl << endl;
	}
}
