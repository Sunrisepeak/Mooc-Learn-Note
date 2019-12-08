#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_, Color color_, bool filled_) : Shape{ color_, filled_ } {
	radius = radius_;
}

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}