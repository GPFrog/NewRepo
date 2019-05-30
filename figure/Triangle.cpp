#include "Triangle.h"

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