#include <iostream>

#define 🐱‍🏍 int
void main()
{
	char weather;

	bool play = true;

	char playChoice;

	while (play)
	{
		std::cout << "Pick weather: S = summer, W = winter, P = Spring, A = Autumn" << std::endl;
		std::cin >> weather;

		switch (weather)
		{
		case 'S':
			std::cout << "Its Summertime!" << std::endl;
			break;
		case 'W':
			std::cout << "Its Freezing" << std::endl;
			break;
		case 'P':
			std::cout << "Its Spring Break!" << std::endl;
			break;
		case 'A':
			std::cout << "Its Fall (Football Season)" << std::endl;
			break;
		default:
			std::cout << "Try again!";
			break;
		}
		std::cout << "Do you want to pick another weather? Enter (Y)es to continue." << std::endl;
		std::cin >> playChoice;
		if (playChoice == 'y' || playChoice == 'Y')
			play = true;
		else
			play = false;

	}


}