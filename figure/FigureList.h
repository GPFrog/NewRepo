#include  <Windows.h>
#include "Triangle.h"
#include "Circle.h"
#include "Diamond.h"
#include "Oblong.h"

class FigureList
{
private:
	Figure** figureList;
	int size;
	int top;
public:
	FigureList(int gainedSize)
	{
		size = gainedSize;
		figureList = new Figure * [size];
		top = -1;
	}
	~FigureList() {}
	void addFigure(int location);
	void changeFigure();
	void makeCircle(int location);
	void makeDiamond(int location);
	void makeOblong(int location);
	void makeTriangle(int location);
	void insertFigure(Figure* figure);
	void showFigureName();
	void deleteFigure(int location);
	void printFigure();
	void resize();
};

void FigureList::printFigure()
{
	for (int i = 0; i < 2; i++)
	{
		system("cls");
		for (int i = 0; i < top + 1; i++)
		{
			figureList[i]->draw();
		}
		Sleep(1000);
	}
	for (int i = 0; i < top + 1; i++)
	{
		figureList[i]->setXYNatural();
	}
	system("cls");
}

void FigureList::deleteFigure(int location = -1)
{
	if (top == -1)
	{
		std::cout << "삭제할 도형이 없습니다." << std::endl;
		return;
	}
	int userInput = location;
	while (userInput < 1 || top + 1 < userInput)
	{
		std::cout << "몇번째 도형을 삭제하시겠습니까?(1부터 갯수번째 중 선택 / 현재 차있는 도형의 갯수 : " << top + 1 << ")";
		std::cin >> userInput;
	}
	delete figureList[userInput - 1];
	for (int i = userInput - 1; i < top; i++)
	{
		figureList[i] = figureList[i + 1];
	}
	top--;
}

void FigureList::resize()
{
	Figure** newFigureList = new Figure * [size * 2];
	size *= 2;
	for (int i = 0; i < top + 1; i++)
	{
		newFigureList[i] = figureList[i];
	}
	delete[] figureList;
}

void FigureList::showFigureName()
{
	for (int i = 0; i < top + 1; i++)
	{
		std::cout << i + 1 << " : ";
		figureList[i]->showName();
		std::cout << std::endl;
	}
}

void FigureList::changeFigure()
{
	if (top == -1)
	{
		std::cout << "교체할 도형이 없습니다." << std::endl;
		return;
	}
	int userInput = -1;
	while (userInput < 1 || top + 1 < userInput)
	{
		std::cout << "몇번째 도형을 바꾸시겠습니까?(1부터 갯수번째 중 선택 / 현재 차있는 도형의 갯수 : " << top + 1 << ")";
		std::cin >> userInput;
	}
	addFigure(userInput);
}

void FigureList::addFigure(int location = -1)
{
	int userInput = -1;

	std::cout << "어떤 도형을 추가하시겠습니까?" << std::endl;
	std::cout << "1. 원" << std::endl;
	std::cout << "2. 삼각형" << std::endl;
	std::cout << "3. 사각형" << std::endl;
	std::cout << "4. 마름모" << std::endl;
	std::cout << "5. 돌아가기" << std::endl;
	while (userInput < 0 || 6 < userInput)
	{
		std::cin >> userInput;
		switch (userInput)
		{
		case 1:
			makeCircle(location);
			break;
		case 2:
			makeTriangle(location);
			break;
		case 3:
			makeOblong(location);
			break;
		case 4:
			makeDiamond(location);
			break;
		case 5:
			std::cout << "메인 메뉴로 돌아갑니다." << std::endl;
			return;
		default:
			std::cout << "\n잘못된 입력을 하셨습니다. \n 다시 입력해 주십시오." << std::endl;
			break;
		}
	}
	if (top == size)
		resize();
}

void FigureList::insertFigure(Figure* newFigure)
{
	int x, y;
	std::cout << "x, y좌표 이동값을 입력하세요 ";
	std::cin >> x >> y;
	newFigure->setXYAdder(x, y);
	if (top == 0)
	{
		figureList[top] = newFigure;
		return;
	}
	for (int i = 0; i < top; i++)
	{
		if (newFigure->getArea() <= figureList[i]->getArea())
		{
			for (int j = top; i < j; j--)
			{			
				figureList[j] = figureList[j - 1];
			}
			figureList[i] = newFigure;
			return;
		}
	}
	figureList[top] = newFigure;
}

void FigureList::makeCircle(int location)
{
	int r = 0;
	while (r == 0)
	{
		std::cout << "반지름을 입력하세요 : ";
		std::cin >> r;
	}
	Circle* newCircle = new Circle(r);	
	if (location == -1)
		top++;
	else
		deleteFigure(location);
	insertFigure(newCircle);
}

void FigureList::makeDiamond(int location)
{
	int width = 0;
	int height = 0;

	while (width == 0)
	{
		std::cout << "너비를 입력하세요 : ";
		std::cin >> width;
	}
	while (height == 0)
	{
		std::cout << "높이를 입력하세요 : ";
		std::cin >> height;
	}
	Diamond* newDiamond = new Diamond(width, height);
	if (location == -1)
		top++;
	else
		deleteFigure(location);
	insertFigure(newDiamond);
}

void FigureList::makeOblong(int location)
{
	int width = 0;
	int height = 0;
	while (width == 0)
	{
		std::cout << "너비를 입력하세요 : ";
		std::cin >> width;
	}
	while (height == 0)
	{
		std::cout << "높이를 입력하세요 : ";
		std::cin >> height;
	}
	Oblong* newOblong = new Oblong(width, height);
	if (location == -1)
		top++;
	else
		deleteFigure(location);
	insertFigure(newOblong);
}

void FigureList::makeTriangle(int location)
{
	int base = 0;
	int height = 0;
	while (base == 0)
	{
		std::cout << "밑면의 길이를 입력하세요 : ";
		std::cin >> base;
	}
	while (height == 0)
	{
		std::cout << "높이를 입력하세요 : ";
		std::cin >> height;
	}
	Triangle* newTriangle = new Triangle(base, height);
	if (location == -1)
		top++;
	else
		deleteFigure(location);
	insertFigure(newTriangle);
}