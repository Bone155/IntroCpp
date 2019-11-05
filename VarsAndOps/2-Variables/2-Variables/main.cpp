#include <iostream>

int main()
{
	int num_a = 5;

	num_a = 9;
	num_a = 11;
	num_a = 14;

	std::cout << "A) " << num_a << std::endl;

	int num_b = 10;
	num_b = 9;
	int thing_b = 55;
	thing_b = 22;
	std::cout << "B) " << num_b << std::endl;

	int num_c = 3;
	num_c = 7;
	num_c = 1;
	int something_c = 23;
	something_c = 21;
	num_c = something_c;
	std::cout << "C) " << num_c << std::endl;	int num_d = 1;
	int something_d = 3;
	num_d = something_d;
	std::cout << "D) " << something_d << std::endl;	int num_e = 13;
	num_e = num_e / 2;
	std::cout << "E) " << num_e << std::endl;

	float num_f = 13.0;
	num_f = num_f / 2;
	std::cout << "F)" << num_f << std::endl;	std::cout << std::endl;	float deg_c = 0.0;	float deg_f = 32.0;	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cin >> deg_c;
	std::cout << "Celsius: " << deg_c << std::endl;
	deg_f =  deg_c * 1.8 + 32;
	std::cout << "Fahrenheit: " << deg_f << std::endl;	std::cout << std::endl;	float rect_w = 0.0;	float rect_h = 0.0;	float rect_a = 0.0;	std::cout << "Area of a Rectangle)" << std::endl;
	std::cin >> rect_h >> rect_w;
	std::cout << "H: " << rect_h << ", W: " << rect_w << std::endl;
	rect_a = rect_h * rect_w;
	std::cout << "Area: " << rect_a << std::endl;	std::cout << std::endl;	float a, b, c, d, e;	float avg;	avg = a = b = c = d = e = 0.0;	std::cout << "Average of Five)" << std::endl;
	std::cin >> a >> b >> c >> d >> e;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	avg = (a + b + c + d + e) / 5;
	std::cout << "avg: " << avg << std::endl;	std::cout << std::endl;		int x = 13;	int y = 24;	int temp;	std::cout << "Enter an X and Y value" << std::endl;	std::cin >> x;	std::cin >> y;	temp = y;
	y = x;
	x = temp;
		std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;	std::cout << std::endl;	int age;	int months;	std::cout << "Enter your age" << std::endl;	std::cin >> age;	std::cout << "You are " << age << " years old" << std::endl;	months = age * 12;	std::cout << "You've been alive for " << months << " days" << std::endl;	int different_age;
	int bullet_count;
	float dog_years;
	int qty;
	float shield_value;
	float defense_matrixCooldown;
	int red_armor_value;
	float red_armorRatio;
	int happiness;
	int gandhi_aggression;	int num;	long num_two;	short num_three;	float num_four;	double num_five;	long double num_six;	signed num_seven;	unsigned num_eight;	bool num_nine;	char num_ten;	while (true)
	{

	}	return 0;
}