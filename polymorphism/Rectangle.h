#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
	int base;
	int height;
public:
	Rectangle(int b, int h)
	{
		base = b;
		height = h;
	}
	~Rectangle(){}

};