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
	void addFigure(int location = -1);
	void changeFigure();
	void makeCircle(int location);
	void makeDiamond(int location);
	void makeOblong(int location);
	void makeTriangle(int location);
	void insertFigure(Figure* figure);
	void showFigureName();
	void deleteFigure(int location = -1);
	void printFigure();
	void resize();
};
