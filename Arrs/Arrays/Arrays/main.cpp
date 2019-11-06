#include <iostream>

void main() {
	//1) yes, no, no, yes, no, no, no, no
	//2) a) 10 b) 6 c) 7 d) 14 e) error
	bool isPlay = true;
	int choice;
	std::cin >> choice;
	std::cout << std::endl;
	int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int input[10];
	int array[3][3];
	int days[29][5];
	int number;
	int character[5] = { 100, 100, 100, 100, 100};
	int dragons[3][7];
	while (isPlay)
	{
		if (choice == 0) {
			isPlay == false;
		}

		if (choice == 1) {
			for (int i = 0; i < 10; i++) {
				std::cout << i << std::endl;
			}
			system("pause");
		}

		if (choice == 2) {
			std::cin >> input[0];
			std::cin >> input[1];
			std::cin >> input[2];
			std::cin >> input[3];
			std::cin >> input[4];
			std::cout << std::endl;
			for (int i = 0; i < 5; i++) {
				std::cout << input[i] << std::endl;
			}
		}

		if (choice == 3) {
			int max = 0;
			int min = 1000;
			std::cin >> input[0];
			std::cin >> input[1];
			std::cin >> input[2];
			std::cin >> input[3];
			std::cin >> input[4];
			std::cin >> input[5];
			std::cin >> input[6];
			std::cin >> input[7];
			std::cin >> input[8];
			std::cin >> input[9];
			std::cout << std::endl;
			for (int i = 0; i < 10; i++) {
				if (input[i] > max) {
					max = input[i];
				}
				if (input[i] < min) {
					min = input[i];
				}
			}
			std::cout << "The largest # is " << max << " and the smallest # is " << min << "." << std::endl;
		}

		if (choice == 4) {
			std::cout << std::endl;
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 3; col++) {
					std::cin >> number;
					array[row][col] = number;
				}
			}
			std::cout << std::endl;
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 3; col++) {
					std::cout << array[row][col] << " ";
				}
				std::cout << std::endl;
			}
		}

		if (choice == 5) {
			int sum = 0;
			std::cout << std::endl;
			for (int row = 0; row < 29; row++) {
				for (int col = 0; col < 5; col++) {
					std::cin >> number;
					days[row][col] = number;
				}
			}
			std::cout << std::endl;
			for (int row = 0; row < 29; row++) {
				for (int col = 0; col < 5; col++) {
					sum += days[row][col];
				}
				std::cout << "The sum of row is " << sum << std::endl;
				sum = 0;
			}
			std::cout << std::endl;
			for (int col = 0; col < 5; col++) {
				for (int row = 0; row < 29; row++) {
					sum += days[row][col];
				}
				std::cout << "The sum of column is " << sum << std::endl;
				sum = 0;
			}
		}

		if (choice == 6) {
			std::cout << std::endl;
			int ch;
			int damage = 40;
			for (int round = 1; round < 6; round++) {
				std::cout << "Round " << round << std::endl;
				std::cout << std::endl;
				std::cin >> ch;
				int health = character[ch];
				if (health > 0) {
					health -= damage;
					std::cout << "Successful hit. Character " << ch << " now has " << health << " health" << std::endl;
					std::cout << std::endl;
					character[ch] = health;
				}
				else
				{
					std::cout << "Character " << ch << " is dead." << std::endl;
					health = 0;
					std::cout << std::endl;
				}

			}
			for (int i = 0; i < 5; i++) {
				if (character[i] >= 0) {
					std::cout << "Character " << i << " has " << character[i] << " health" << std::endl;
				}
			}
		}

		if (choice == 7) {
			int sum = 0;
			int average;
			int food;
			int max = 0;
			int min = 1000;
			int dragon;
			int day;
			std::cout << std::endl;
			for (int row = 0; row < 3; row++) {
				std::cout << "Dragon " << row;
				std::cout << std::endl;
				for (int col = 0; col < 7; col++) {
					std::cin >> food;
					dragons[row][col] = food;
					std::cout << "Food eaten on day " << col << ": " << food << std::endl;
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 7; col++) {
					sum += dragons[row][col];
				}
			}
			average = sum / 21;
			std::cout << "The average amount of food per day is " << average << std::endl;
			sum = 0;
			std::cout << std::endl;
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 7; col++) {
					sum += dragons[row][col];
				}
				average = sum / 21;
				std::cout << "The average of food dragon " << row << " eats is " << average << " for 7 days" << std::endl;
				sum = 0;
			}

			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 7; col++) {
					if (dragons[row][col] > max) {
						max = dragons[row][col];
						dragon = row;
						day = col;
					}
				}
			}
			std::cout << "Dragon " << dragon << " ate the most with a quantity of " << max << " on day " << day << std::endl;

			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 7; col++) {
					if (dragons[row][col] < min) {
						min = dragons[row][col];
						dragon = row;
						day = col;
					}
				}
			}
			std::cout << "Dragon " << dragon << " ate the least with a quantity of " << min << " on day " << day << std::endl;

			system("pause");
		}

	}

}