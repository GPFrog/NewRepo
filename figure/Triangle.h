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

void Triangle::showName()
{
	std::cout << "Triangle(" << getArea() << ")";
}

void Triangle::draw()
{
	int tempX = getX();
	int tempX2 = tempX;
	int tempY = getY();
	for (int i = 0; i < height; i++)
	{	
		for (int j = 0; j < height - (i + 1); j++)
		{
			tempX++;
		}
		gotoxy(tempX, tempY);
		for (int j = 0; j < 1 + 2 * i; j++)
		{
			std::cout << "*";
		}
		tempY++;
		tempX = tempX2;
	}
	setXY(getX() + getXAdder(), getY() + getYAdder());
}