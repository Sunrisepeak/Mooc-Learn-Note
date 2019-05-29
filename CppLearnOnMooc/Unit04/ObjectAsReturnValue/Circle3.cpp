#include "Circle3.h"

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

Circle Circle::setRadius(double radius)
{
	this->radius = radius;
	return Circle(radius);
	//return *this;	//this pointer
}

Circle& Circle::setRadius_Return_Ref(double radius)
{
	this->radius = radius;
	return *this;	//can't is anonymous object
}
