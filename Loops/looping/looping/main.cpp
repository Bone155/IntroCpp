#include <iostream>


void main() {

	for (int idx = 100; idx > 1; idx-=2)
	{
		std::cout << idx << std::endl;
	}

	for (int idx = 0; idx < 100; idx++) {
		if (idx % 3 == 3)
			std::cout << "Fizz" << std::endl;
		else if (idx % 5 == 5)
			std::cout << "Buzz" << std::endl;
		else if(idx % 3 == 0 && idx % 5 == 0)
			std::cout << "FizzBuzz" << std::endl;
		else
			std::cout << idx << std::endl;
	}

	while (true) {

	}

}