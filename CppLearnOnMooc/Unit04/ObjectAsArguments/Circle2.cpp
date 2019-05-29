#include "Circle2.h"

Circle::Circle()
{
	radius = 1.0;
}

Circle::Circle(double radius_)
{
	radius = radius_;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

double Circle::getRadius() const
{
	//radius = 2.0;	//error
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}
