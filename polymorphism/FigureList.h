#pragma once
#include "Figure.h"
class FigureList
{
private:
	Figure** figureList;
	int size;
public:
	FigureList(int gainedSize)
	{
		size = gainedSize;
		figureList = new Figure*[size];
	}
	~FigureList(){}
	void makeCircle();
	void makeDiamond();
	void makeRectangle();
	void makeTriangle();
	void gett()
	{
		std::cout << "반지름" << std::endl;
		figureList[0]->draw();
		std::cout << "끗" << std::endl;
	}
	
};

void FigureList::makeCircle()
{
	int r;
	std::cout << "반지름을 입력하세요 : ";
	std::cin >> r;
	Circle* newCircle = new Circle(r);
	figureList[0] = newCircle;
}

void FigureList::makeDiamond()
{
	int width;
	int height;
	std::cout << "너비를 입력하세요 : ";
	std::cin >> width;
	std::cout << "높이를 입력하세요 : ";
	std::cin >> height;
	Diamond* newDiamond = new Diamond(width, height);
	
	figureList[0] = newDiamond;
}

void FigureList::makeRectangle()
{
	int width;
	int height;
	std::cout << "너비를 입력하세요 : ";
	std::cin >> width;
	std::cout << "높이를 입력하세요 : ";
	std::cin >> height;
	Rectangle* newRectangle = new Rectangel(width, height);
	figureList[0] = newRectangle;
}

void FigureList::makeTriangle()
{
	int base;
	int height;
	std::cout << "밑면의 길이를 입력하세요 : ";
	std::cin >> base;
	std::cout << "높이를 입력하세요 : ";
	std::cin >> height;
	Circle* newCircle = new Circle(r);
	figureList[0] = newCircle;
}