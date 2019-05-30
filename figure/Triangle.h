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
		setArea(b * h / 2);
		setXY(getX() - base, getY() - height);
	}
	~Triangle() {}
	virtual void draw();
	virtual void showName();
	virtual void setXYNatural()
	{
		setXY(getX() - base, getY() - height);
	}
};
