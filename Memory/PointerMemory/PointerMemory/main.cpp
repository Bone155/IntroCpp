#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstring>

using namespace std;

void revString(char* array);
int countEven(int* array, int length);
int maximum(double* array, int size);
bool contains(char* array, char value);
void example();

int sum(int* numbers, size_t length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += numbers[i];
	}
	return sum;
}

int* zeroArray(size_t length) {
	int* arr = new int[length];
	for (size_t i = 0; i < length; i++) {
		arr[i] = 0;
	}
	return arr;
}

int main() {
	size_t length = 1500;
	char* array = new char[length];
	cin.getline(array, length);
	//example();
	
	revString(array);
	cout << endl;

	int* evens = new int[10];
	evens[0] = 190;
	evens[1] = 2;
	evens[2] = 9;
	evens[3] = 5;
	evens[4] = 6;
	evens[5] = 8;
	evens[6] = 10;
	evens[7] = 21;
	evens[8] = 68;
	evens[9] = 1;
	cout << "Counting evens in an array" << endl << countEven(evens, 10) << " even numbers int the array" << endl;
	cout << endl;

	double* max = new double[10];
	max[0] = 190;
	max[1] = 2;
	max[2] = 9;
	max[3] = 5;
	max[4] = 6;
	max[5] = 8;
	max[6] = 10;
	max[7] = 21;
	max[8] = 68;
	max[9] = 1;
	cout << "Max" << endl << "The max of the array is " << maximum(max, 10) << endl;
	cout << endl;

	char letter = 'h';
	bool con = contains(array, letter);
	if (con == true)
		cout << "The array has " << letter;
	else
		cout << "The array does not have " << letter;
	cout << endl;

	delete[] array;
	delete[] evens;
	delete[] max;

	return system("pause");
}

void example() {
	int walletCount = 10;
	int* wallets = new int[walletCount];
	
	wallets[0] = 5;
	wallets[1] = 2;
	wallets[2] = 7;
	wallets[3] = 0;
	wallets[4] = 8;
	wallets[5] = 75;
	wallets[6] = 30;
	wallets[7] = 172;
	wallets[8] = 0;
	wallets[9] = 0;

	int* noWallets = zeroArray(1000);

	int total = sum(wallets, walletCount);
	cout << total << endl;

	delete[] wallets;
	delete[] noWallets;

	int* something = new int;
	int* other = something;
	*something = 55;
	delete something;
	something = nullptr;

	//if not null
	if (something != nullptr) {
		cout << *something << endl;
	}
	else {
		cout << "Something was null" << endl;
	}

}

void revString(char* array) {
	char* begin,* end, ch;
	begin = array;
	end = array;
	for (int i = 0; i < strlen(array) - 1; i++)
		end++;
	for (int i = 0; i < strlen(array)/2; i++) {
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}
	cout << array << endl;
}

int countEven(int* array, int length) {
	int evens = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] % 2 == 0)
			evens++;
	}
	return evens;
}

int maximum(double* array, int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < array[i])
			max = array[i];
		if (array[i] <= 0) {
			array[i] = 0;
			max = 0;
		}
	}
	return max;
}

bool contains(char* array, char value) {
	bool isInArray = false;
	for (int i = 0; i < strlen(array); i++) {
		if (array[i] == value)
			isInArray = true;
	}
	return isInArray;
}
