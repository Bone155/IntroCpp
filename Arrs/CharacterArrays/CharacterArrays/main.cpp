#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstring>

using namespace std;

void example();
void exercises();
void Reverse(char input[]);

int main() {
	
	//example();
	cout << endl;

	exercises();
	cout << endl;

	system("pause");
}

void example() {
	char name[10] = "Matthew";
	char name2[] = "Matthew";
	char name3[64] = "Dennis";
	char name4[] = "Richie";
	char name5[] = "John";
	char name6[64];

	std::cout << strlen(name) << std::endl;
	std::cout << std::endl;

	if(strcmp(name, name2) == 0)
		std::cout << "Its a match" << std::endl;
	else
		std::cout << "Its not a match" << std::endl;
	std::cout << std::endl;

	std::cout << strcpy(name6, name) << std::endl;
	std::cout << std::endl;

	std::cout << strcat(name3, name4) << std::endl;
	std::cout << std::endl;
}

void exercises() {

	char input[30];
	char password[30];
	char array[5][30];
	
	cout << "Enter first and last name" << endl;
	cin.getline(input, 30);
	cout << endl;
	cout << "Whats up " << input << endl;
	cout << endl;

	Reverse(input);
	cout << "Your name in reverse is " << input << endl;
	cout << endl;

	cout << "Enter 5 names" << endl;
	for (int i = 0; i < 5; i++) {
		cin.getline(array[i], 30);
		cout << "This name in reverse is ";
		Reverse(array[i]);
		cout << endl;
	}
	cout << endl;

	cout << "Enter name and a password" << endl << "At least 8 characters long, contains at least one capital letter, one number and one symbol" << endl;
	cin.getline(input, 30);
	cin.getline(password, 30);
	for (int i = 0; i < strlen(password); i++) {
		if (strlen(password) < 8) {

		}
		if (password[i] != "") {

		}
		if (password[i] != "") {

		}
		if (password[i] != "") {

		}
	}

}

void Reverse(char input[]) {
	for (int i = 0; i < strlen(input)/2; i++) {
		char reverseName = input[i];
		input[i] = input[strlen(input) - i - 1];
		input[strlen(input) - i - 1] = reverseName;
	}
	cout << input << endl;
}
