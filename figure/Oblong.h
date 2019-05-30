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

void Oblong::showName()
{
	std::cout << "Oblong(" << getArea() << ")";
}

void Oblong::draw()
{
	int tempX = getX();
	int tempY = getY();
	for (int i = 0; i < height; i++)
	{
		gotoxy(tempX, tempY);
		for (int j = 0; j < base; j++)
		{
			std::cout << "*";
		}
		tempY++;
	}
	setXY(getX() + getXAdder(), getY() + getYAdder());
}