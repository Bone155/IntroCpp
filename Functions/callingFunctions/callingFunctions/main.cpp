#include <iostream>
#include <cstdlib>

float smaller(float a, float b);
float smaller(float a, float b, float c);
float half(float number);
void coinToss(int num);
int sum(int x, int y);
int sum(int n);
int square(int x);
int sumTo(int n);
int sumArray(int array[]);
int minInArray(int array[], int n);
void multiplyByIndex(int input[], int output[], int n);
void addTwoArrays(int input1[], int input2[], int output[], int n);
int pow(int x, int y);
void numberOfNumbers(int array[], int n);
void rockPapSc();
int player();
int computer();

void main() {

	float a;
	float b;
	float c;
	int n;
	int array[5];
	int minArray[7];
	int firstInputArray[7];
	int secondInputArray[7];
	int outputArray[7];
	int runSumArray[4];
	int numbers[8];
	
	std::cout << "Whats smaller?" << std::endl;
	std::cin >> a >> b >> c;
	std::cout << std::endl;
	std::cout << "The smaller number is " << smaller(a, b) << std::endl;
	std::cout << std::endl;
	std::cout << "The smaller number is " << smaller(a, b, c) << std::endl;
	std::cout << std::endl;

	std::cout << "Half of the first number is " << half(a) << std::endl;
	std::cout << std::endl;

	std::cout << "Toss a coin" << std::endl;
	int tosses;
	std::cin >> tosses;
	coinToss(tosses);
	std::cout << std::endl;

	std::cout << "numbers + next number" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	std::cout << sumTo(n) << std::endl;
	std::cout << std::endl;
	
	std::cout << "Add values of an array" << std::endl;
	std::cout << sumArray(array) << std::endl;
	std::cout << std::endl;

	std::cout << "Min in array" << std::endl;
	std::cout << minInArray(minArray, 7) << std::endl;
	std::cout << std::endl;

	std::cout << "Multiply array by index" << std::endl;
	multiplyByIndex(firstInputArray, outputArray, 7);
	std::cout << std::endl;

	std::cout << "Adding two arrays" << std::endl;
	addTwoArrays(firstInputArray, secondInputArray, outputArray, 7);
	std::cout << std::endl;

	std::cout << "Powering an number" << std::endl;
	std::cout << pow(3, 4) << std::endl;
	std::cout << std::endl;

	/*std::cout << "Number of numbers in array" << std::endl;
	numberOfNumbers(numbers, 7);
	std::cout << std::endl;*/

	std::cout << "Rock, Paper, or Scissors" << std::endl;
	rockPapSc();
	std::cout << std::endl;

	system("pause");
}

float smaller(float a, float b) {
	if (a > b)
		return b;
	else
		return a;
}

float smaller(float a, float b, float c) {
	if (a > b)
		return b;
	else if (a > c)
		return c;
	else if (b > a)
		return a;
	else if (b > c)
		return c;
	else if (c > a)
		return a;
	else
		return b;
}

float half(float number) {
	return number / 2;
}

void coinToss(int num) {
	for (int i = 0; i < num; i++) {
		int result = rand() % 2;
		if (result == 1)
			std::cout << "Heads" << std::endl;
		else
			std::cout << "Tails" << std::endl;
	}
}

int sum(int x, int y) {
	return x + y;
}

int sum(int n) {
	if (n == 0)
		return 0;
	else
		return n + n;
}

int square(int x) {
	return x * x;
}

int sumTo(int n) {
	int result = 0;
	for (int i = 0; i <= n; i++) {
		result += i;
	}
	return result;
}

int sumArray(int array[]) {
	int n;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		std::cin >> n;
		array[i] = n;
	}
	for (int i = 0; i < 5; i++) {
		sum += array[i];
	}
	return sum;
}

int minInArray(int array[], int n) {
	int min = 1000;
	int num;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		array[i] = num;
	}
	for (int i = 0; i < n; i++) {
		if (min >= array[i]) {
			min = array[i];
		}
	}
	std::cout << std::endl;
	return min;
}

void multiplyByIndex(int input[], int output[], int n) {
	int num;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		input[i] = num;
	}
	for (int i = 0; i < n; i++) {
		output[i] = input[i] * i;
		std::cout << std::endl;
	}
	for (int i = 0; i < n; i++) {
		std::cout << output[i] << " ";
	}
}

void addTwoArrays(int input1[], int input2[], int output[], int n) {
	int num1;
	int num2;
	std::cout << std::endl;
	std::cout << "Array 1" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> num1;
		input1[i] = num1;
	}
	std::cout << std::endl;
	std::cout << "Array 2" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> num2;
		input2[i] = num2;
	}
	for (int i = 0; i < n; i++) {
		output[i] = input1[i] + input2[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << output[i] << " ";
	}
}

int pow(int x, int y) {
	int result = 0;
	result = x;
	for (int i = 0; i < y-1; i++) {
		result *= x;
	}
	return result;
}

void numberOfNumbers(int array[], int n) {
	int num;
	int count = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		array[i] = num;
	}
	for (int i = 0; i < n; i++) {
		if (array[i] == array[i]) {
			count++;
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < n; i++) {
		std::cout << count << "," << array[i] << " ";
	}
}

void rockPapSc() {
	int p = player();
	int c = computer();
	if (p == 1 && c == 3) {
		std::cout << "Player Wins!" << std::endl << "Rock beats Scissors";
	}
	else if (p == 2 && c == 1) {
		std::cout << "Player Wins!" << std::endl << "Paper beats Rock";
	}
	else if (p == 3 && c == 2) {
		std::cout << "Player Wins!" << std::endl << "Scissors beats Paper";
	}
	
	if (c == 1 && p == 3) {
		std::cout << "Computer Wins!" << std::endl << "Rock beats Scissors";
	}
	else if (c == 2 && p == 1) {
		std::cout << "Computer Wins!" << std::endl << "Paper beats Rock";
	}
	else if (c == 3 && p == 2) {
		std::cout << "Computer Wins!" << std::endl << "Scissors beats Paper";
	}

	if (p == c) {
		std::cout << "Tied! Play again" << std::endl;
		rockPapSc();
	}
}

int player() {
	int n;
	std::cin >> n;
	return n;
}

int computer() {
	int n = rand() % 3;
	return n;
}