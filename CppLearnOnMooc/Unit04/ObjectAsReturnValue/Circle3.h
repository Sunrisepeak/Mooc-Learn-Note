//#pragma once

//#ifndef INCLUDE_CIRCLE_H		//traditional C/C++ 
//#define INCLUDE_CIRCLE_H

//_Pragma("once")	//C++ 11 _Pragma("once") , but VS2017 not support

__pragma(once)		//MS special
class Circle {
	//Defualt is private for function and field
	double radius;
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius() const;	//C++11 const function can't modify data of Object, only-read
	Circle setRadius(double radius);
	Circle& setRadius_Return_Ref(double radius);	//reference type
};
//#endif
