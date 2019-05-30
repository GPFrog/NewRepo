#pragma once
#include "Figure.h"

class Oblong : public Figure
{
private:
	int base;
	int height;
public:
	Oblong(int b, int h)
	{
		base = b;
		height = h;
		setArea(base * height);
		setXY(getX() - base, getY() - height);
	}
	~Oblong() {}
	virtual void draw();
	virtual void showName();
	virtual void setXYNatural()
	{
		setXY(getX() - base, getY() - height);
	}
};
