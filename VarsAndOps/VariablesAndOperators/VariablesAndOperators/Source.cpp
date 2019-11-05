#include <iostream>

int main() 
{
	int age = 19;
	std::cout << age << std::endl;
	int years = 2;
	age += years;
	std::cout << "I will be " << age << " in " << years << "." << std::endl;

	std::cout << "What is your age?" << std::endl;
	std::cin >> age;
	std::cout << "Wow, you're " << age << " years old." << std::endl;

	while (true)
	{

	}

	return 0;
}