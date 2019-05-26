#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	int radius;
public:
	Circle() {}
	Circle(int r)
	{
		std::cout << "Circle »ý¼ºÀÚ" << std::endl;
		radius = r;
	}
	~Circle() {}
	virtual void draw();
	int getRadius()
	{
		return radius;
	}
};

void Circle::draw()
{
	std::cout << "draw circle" << radius << std::endl;
}