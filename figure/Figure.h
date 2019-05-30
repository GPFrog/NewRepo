#pragma once
#include <iostream>

class Figure
{
private:
	double area;
	int x;
	int y;
	int xAdder;
	int yAdder;
public:
	Figure() 
	{
		x = 60;
		y = 20;
	}
	virtual ~Figure(){}
	virtual void draw() {}
	virtual void showName() {}
	virtual void setXYNatural() {}
	//=======getter=======
	double getArea() { return area; }
	int getX() { return x; }
	int getY() { return y; }
	int getXAdder() { return xAdder; }
	int getYAdder() { return yAdder; }
	//=======setter=======
	void setArea(double gainedArea) { area = gainedArea; }
	void setXY(int gainedX, int gainedY)
	{ 
		x = gainedX;
		y = gainedY;
	}
	void setXYAdder(int gainedX, int gainedY)
	{
		xAdder = gainedX;
		yAdder = gainedY;
	}

};

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}