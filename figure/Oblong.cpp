#include "Oblong.h"

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