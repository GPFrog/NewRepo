#include "Diamond.h"

void Diamond::showName()
{
	std::cout << "Diamond(" << getArea() << ")";
}

void Diamond::draw()
{
	int tempX = getX();
	int tempX2 = tempX;
	int tempY = getY();
	for (int i = 0; i < height / 2; i++)
	{
		for (int j = 0; j < height / 2 - i; j++)
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
	for (int i = 0; i < height / 2 + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			tempX++;
		}
		gotoxy(tempX, tempY);
		for (int j = 0; j < width - 2 * i; j++)
		{
			std::cout << "*";
		}
		tempY++;
		tempX = tempX2;
	}
	setXY(getX() + getXAdder(), getY() + getYAdder());
}