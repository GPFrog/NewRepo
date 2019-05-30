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

void Circle::showName()
{
	std::cout << "Circle(" << getArea() << ")";
}

void Circle::draw()
{
	int tempX = getX();
	int tempY = getY();
	tempX++;
	gotoxy(tempX, tempY);
	for (int i = 0; i < (radius - 1) * 2; i++)
		std::cout << "*";
	tempX--;
	for (int i = 0; i < (radius - 1) * 2; i++)
	{
		gotoxy(tempX, ++tempY);
		for (int j = 0; j < radius * 2; j++)
			std::cout << "*";
	}
	tempX++;
	gotoxy(tempX, ++tempY);
	for (int i = 0; i < (radius - 1) * 2; i++)
	{
		std::cout << "*";
	}
	setXY(getX() + getXAdder(), getY() + getYAdder());
}