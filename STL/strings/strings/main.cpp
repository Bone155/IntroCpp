#include <string>
#include <iostream>
#include <fstream>
#include <iterator>
#include <random>
#include <time.h>

using namespace std;

string loadRandomWord() {
	ifstream in;
	in.open("dictionary.txt", ifstream::in);
	
	if (in.is_open() == false) {
		cout << "The dictionary file could not be opened";
		return "";
	}
	
	string dic;
	unsigned int lineCount = 0;
	while (!in.eof()) { lineCount++; getline(in, dic); }

	int selection = rand() % lineCount;

	in.clear();

	in.seekg(0, ios::beg);

	string text;

	for (int i = 0; i < selection; i++) {
		getline(in, text);
	}

	in.close();

	return text;
}

void main() 
{
	srand(time(nullptr));

	string word = loadRandomWord();
	string letter;
	string output = "";

	if (word.length() == 0) {
		cout << "The program could not execute." << endl;
		return;
	}

	output.resize(word.length(), '_');
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a letter: " << endl;
		cin >> letter;

		if (letter.length() > 1)
			letter.resize(1);

		int startPos = 0;
		size_t searchPos = word.find(letter, startPos);

		while (searchPos != string::npos) {
			output[searchPos] = letter[0];
			startPos = searchPos + 1;

			if (startPos >= word.length())
				break;
			searchPos = word.find(letter, startPos);
		}

		cout << output << endl << endl;
	}

	cout << word << endl;

	cout << endl << "Press Enter to exit" << endl;

	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
}