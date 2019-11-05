#include <iostream>

#define 🐱‍👤 int;
void main() 
{	
	int y;
	int x;
	bool isPlay = true;
	char opp;
	int one;
	int two;
	int three;
	int four;
	int five;
	int choice;
	std::cin >> choice;

	while (isPlay) 
	{
		std::cout << "Choose one out of nine exercises" << std::endl;

		if (choice <= 0) {
			isPlay = false;
		}

		if (choice == 1) {
			std::cout << "1)" << std::endl;
			std::cin >> y;
			if (y == 0) {
				x = 100;
			}
			std::cout << std::endl;
		}

		if (choice == 2)
		{
			std::cout << "2) Enter 2 numbers" << std::endl;
			std::cin >> one;
			std::cin >> two;

			if (one > two)
			{
				std::cout << std::endl;
				std::cout << one;
				std::cout << std::endl;
			}

			if (one < two)
			{
				std::cout << std::endl;
				std::cout << two;
				std::cout << std::endl;
			}

		}

		if (choice == 3) {
			std::cout << "3) Enter 5 numbers" << std::endl;
			std::cin >> one;
			std::cin >> two;
			std::cin >> three;
			std::cin >> four;
			std::cin >> five;

			if (one + two + three + four + five > 0)
				std::cout << "Positive";
			else if (one + two + three + four + five < 0)
				std::cout << "Negative";
			else
				std::cout << "Zero";
		}

		if (choice == 4) {
			std::cout << "4) Enter 1, 2, 3, or 4" << std::endl;
			std::cin >> x;

			switch (x)
			{
				case 1:
					std::cout << "1";
					break;
				case 2:
					std::cout << "2 or 3";
					break;
				case 3:
					std::cout << "2 or 3";
					break;
				case 4:
					std::cout << "1";
					break;
				default:
					std::cout << "Invalid";
					break;
			}
			
		}

		if (choice == 5) {
			std::cout << "5) ternary exercise" << std::endl;
			std::cin >> x;
			std::cin >> y;
			y = (x == 0) ? 0 : 10 / x;
		}

		if (choice == 6) {
			std::cout << "6) Enter 2 numbers" << std::endl;
			std::cin >> one;
			std::cin >> opp;
			std::cin >> two;
			int result;
			if (opp == '+') {
				result = one + two;
				std::cout << result << std::endl;
			}

			if (opp == '-') {
				result = one - two;
				std::cout << result << std::endl;
			}

			if (opp == '*') {
				result = one * two;
				std::cout << result << std::endl;
			}

			if (opp == '/') {
				result = one / two;
				std::cout << result << std::endl;
			}

			if (opp == '%') {
				result = one % two;
				std::cout << result << std::endl;
			}

		}

		if (choice == 7) {
			std::cout << "7) Enter a month" << std::endl;
			std::cin >> one;

			switch (one)
			{
				case 1:
					std::cout << "There are 31 days in this month" << std::endl;
					break;
				case 2:
					std::cout << "There are 28 days in this month, 29 every 4 years" << std::endl;
					break;
				case 3:
					std::cout << "There are 31 days in this month" << std::endl;
					break;
				case 4:
					std::cout << "There are 30 days in this month" << std::endl;
					break;
				case 5:
					std::cout << "There are 31 days in this month" << std::endl;
					break;
				case 6:
					std::cout << "There are 30 days in this month" << std::endl;
					break;
				case 7:
					std::cout << "There are 31 days in this month" << std::endl;
					break;
				case 8:
					std::cout << "There are 31 days in this month" << std::endl;
					break;
				case 9:
					std::cout << "There are 30 days in this month" << std::endl;
					break;
				case 10:
					std::cout << "There are 31 days in this month" << std::endl;
					break;
				case 11:
					std::cout << "There are 30 days in this month" << std::endl;
					break;
				case 12:
					std::cout << "There are 31 days in this month" << std::endl;
				default:
					std::cout << "Error! Error! Error!" << std::endl;
					break;
			}
		}

		if (choice == 8) {
			std::cout << "8) do nothing" << std::endl;
			bool flag = true;
			int numPos = 35, numNeg = -55;
			char frstChar = 'J', scndChar = 'O';
			double frstPrice = 5.60;

			if (numPos > numNeg) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (frstChar > scndChar) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (!(numPos + numNeg)) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "True" << std::endl;
			}

			if ((numPos == -30) || (numNeg == -55)) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (frstPrice >= 4.1 && (frstPrice < 9.9)) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (!flag && (scndChar <= 'R')) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (numPos < 66 || (flag && numPos > 35)) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (++numPos == 36) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (numPos++ == 36) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if ((frstChar == 'j') || (frstChar == 'J')) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

		}

		if (choice == 9) {
			bool a = true;
			bool b = false;

			if ((a || b) || (a && b)) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (!((!a) && (a)) || (a && b)) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (!((5 || a) || (!b)) && (!(a) && b)) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (a || b && a) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

			if (!a&&b) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}

		}

	}
	

}