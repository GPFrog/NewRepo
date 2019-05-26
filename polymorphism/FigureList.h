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
		std::cout << "������" << std::endl;
		figureList[0]->draw();
		std::cout << "��" << std::endl;
	}
	
};

void FigureList::makeCircle()
{
	int r;
	std::cout << "�������� �Է��ϼ��� : ";
	std::cin >> r;
	Circle* newCircle = new Circle(r);
	figureList[0] = newCircle;
}

void FigureList::makeDiamond()
{
	int width;
	int height;
	std::cout << "�ʺ� �Է��ϼ��� : ";
	std::cin >> width;
	std::cout << "���̸� �Է��ϼ��� : ";
	std::cin >> height;
	Diamond* newDiamond = new Diamond(width, height);
	
	figureList[0] = newDiamond;
}

void FigureList::makeRectangle()
{
	int width;
	int height;
	std::cout << "�ʺ� �Է��ϼ��� : ";
	std::cin >> width;
	std::cout << "���̸� �Է��ϼ��� : ";
	std::cin >> height;
	Rectangle* newRectangle = new Rectangel(width, height);
	figureList[0] = newRectangle;
}

void FigureList::makeTriangle()
{
	int base;
	int height;
	std::cout << "�ظ��� ���̸� �Է��ϼ��� : ";
	std::cin >> base;
	std::cout << "���̸� �Է��ϼ��� : ";
	std::cin >> height;
	Circle* newCircle = new Circle(r);
	figureList[0] = newCircle;
}