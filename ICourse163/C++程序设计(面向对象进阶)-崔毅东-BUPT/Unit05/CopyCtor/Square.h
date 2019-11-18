#pragma once
// task1: add copy-constructor, destruction and their information.
class Square {
private:
	double side{ 1.0 };
	//static member;
	static int numberOfObjects;
public:
	

	Square(double side){
		this->side = side;
		numberOfObjects++;
	}
	//call agent constructor
	Square() : Square(3.0) {}
	static int getNumberOfObjects(){
		return numberOfObjects;
	}

	Square(const Square& s) {
		this->side = s.side;
		numberOfObjects++;
		std::cout << "Square(const Square&) is invoked" << std::endl;
	}
	~Square() {
		numberOfObjects--;
	}

	void setSide(double side) {
		this->side = side;
	}

	double getArea() {
		return side * side;
	}

	double getSide(){
		return side;
	}

	int getNumberOfObjectNonStatic(){
		return numberOfObjects;
	}
};