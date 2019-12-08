#pragma once
#include <iostream>
#include <string>
#include <array>
using std::string;
using namespace std::string_literals;	//c++17 "string-obj"s

enum class Color {
	white, black, red, green, blue, yellow
};

class Shape {
private:
	Color color{ Color::black };
	bool filled{ false };
public:
	Shape() = default;
	
	Shape(Color _color, bool _filled) {
		color = _color;
		filled = _filled;
	}

	Color getColor() {
		return color;
	}

	void setColor(Color _color) { color = _color; }
	bool isFilled() { return filled; }
	void setFilled(bool _filled) { filled = _filled; }

	string toString() {
		std::array<string, 6> c{ "wihte"s, "black"s, "red"s, "green"s, "bule"s, "yellow"s };
		return "Shape: " + c[static_cast<int>(color)] + " " + (filled ? "filled"s : "not filled"s);
	}
};