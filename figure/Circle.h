#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	int radius;
public:
	Circle() { radius = 0; }
	Circle(int r)
	{
		radius = r;
		setArea(r * r * 3.14);
		setXY(getX() - radius, getY() - radius);
	}
	~Circle() {}
	virtual void draw();
	virtual void showName();
	virtual void setXYNatural()
	{
		setXY(getX() - radius, getY() - radius);
	}
	int getRadius() { return radius; }
};