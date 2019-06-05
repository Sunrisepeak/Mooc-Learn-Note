#pragma once

class Square {
private:
	double side{ 1.0 };
	//static member;
	static int numberOfObjects;
public:
	double getSide()
	{
		return side;
	}
	void setSide(double side)
	{
		this->side = side;
	}

	Square(double side)
	{
		this->side = side;
		numberOfObjects++;
	}
	//call agent constructor
	Square() :Square(3.0) {}
	static int getNumberOfObject()
	{
		return numberOfObjects;
	}

	int getNumberOfObjectNonStatic()
	{
		return numberOfObjects;
	}
};