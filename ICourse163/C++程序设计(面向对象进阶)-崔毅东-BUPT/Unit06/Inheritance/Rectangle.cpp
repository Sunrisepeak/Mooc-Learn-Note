#include "Rectangle.h"

Rectangle::Rectangle(double w, double h, Color c, bool filled_) : width{ w }, height{ h }, Shape{ c, filled_ } {
}

double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setWidth(double w) {
	width = w;
}

double Rectangle::getHeight() const {
	return height;
}

void Rectangle::setHeight(double h) {
	height = h;
}

double Rectangle::getArea() const
{
	return width * height;
}
