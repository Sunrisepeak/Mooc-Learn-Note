#include <iostream>
#include "Circle.h"

int main()
{
	Circle ca1[]{ Circle(1.0), Circle{ 2.0 }, Circle{ 3.0 } };
//	auto ca2[]{ 10.0, 11, 12.0 };	//error, base array can't to use auto
	Circle ac2[]{ 10.0, 11, 12.0 };
	
	return 0;
}