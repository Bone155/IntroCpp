#include "MyColor.h"



MyColor::MyColor()
{
}

MyColor::MyColor(int red, int green, int blue, int alpha)
{
	r = red;
	g = green;
	b = blue;
	a = alpha;
}

MyColor MyColor::operator+(const MyColor & rhs) const
{
	MyColor temp;
	temp.r = r + rhs.r;
	temp.g = g + rhs.g;
	temp.b = b + rhs.b;
	return temp;
}

MyColor MyColor::operator-(const MyColor & rhs) const
{
	MyColor temp;
	temp.r = r - rhs.r;
	temp.g = g - rhs.g;
	temp.b = b - rhs.b;
	return temp;
}

MyColor MyColor::operator*(const MyColor & rhs) const
{
	MyColor temp;
	temp.r = r * rhs.r;
	temp.g = g * rhs.g;
	temp.b = b * rhs.b;
	return temp;
}

MyColor MyColor::operator/(const MyColor & rhs) const
{
	MyColor temp;
	temp.r = r / rhs.r;
	temp.g = g / rhs.g;
	temp.b = b / rhs.b;
	return temp;
}

MyColor & MyColor::operator+=(const MyColor & rhs)
{
	*this += rhs;
	return *this;
}

MyColor & MyColor::operator-=(const MyColor & rhs)
{
	*this -= rhs;
	return *this;
}

MyColor & MyColor::operator*=(const MyColor & rhs)
{
	*this *= rhs;
	return *this;
}

MyColor & MyColor::operator/=(const MyColor & rhs)
{
	*this /= rhs;
	return *this;
}

bool MyColor::operator==(const MyColor & rhs) const
{
	return r == rhs.r && g == rhs.g && b == rhs.b;
}

bool MyColor::operator!=(const MyColor & rhs) const
{
	return r != rhs.r || g != rhs.g || b != rhs.b;
}

MyColor MyColor::operator!() const
{
	MyColor temp;
	temp.r = r * -1;
	temp.g = g * -1;
	temp.b = b * -1;
	return temp;
}
