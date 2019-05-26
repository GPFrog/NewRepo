#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
	int base;
	int height;
public:
	Triangle(int b, int h)
	{
		base = b;
		height = h;
	}
	virtual void draw();
};

void Triangle::draw()
{
	std::cout << "drawTriangle" << std::endl;
}