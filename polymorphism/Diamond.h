#pragma once
#include "Figure.h"

class Diamond : public Figure
{
private:
	int width;
	int height;
public:
	Diamond(){}
	Diamond(int w, int h)
	{
		width = w;
		height = h;
	}
	~Diamond(){}
	int getWidth() { return width; }
	virtual void draw();
};

void Diamond::draw()
{
	std::cout << "draw Diamond" << std::endl;
}