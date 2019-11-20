#pragma once
class Point2D
{
public:
	float x, y;

	Point2D();
	Point2D(float a_x, float a_y);
	~Point2D();

	Point2D operator + (const Point2D other);
	Point2D& operator += (const Point2D other);

};

