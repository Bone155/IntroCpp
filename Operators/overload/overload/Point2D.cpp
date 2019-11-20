#include "Point2D.h"


Point2D::Point2D() : x(0), y(0)
{
}

Point2D::Point2D(float a_x, float a_y) : x(a_x), y(a_y)
{
}

Point2D::~Point2D()
{
}

Point2D Point2D::operator+(const Point2D other)
{
	return Point2D(x + other.x, y + other.y);
}

Point2D & Point2D::operator+=(const Point2D other)
{
	x += other.x;
	y += other.y;
	return *this;
}
