__pragma(once)		//MS special
#include "Shape.h"

class Circle : public Shape{
	double radius;

public:
	Circle();
	Circle(double radius_, Color color_, bool filled_);
	double getRadius() const;
	void setRadius(double r);
	double getArea();

};