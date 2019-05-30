#pragma once
#include "Figure.h"

class Diamond : public Figure
{
private:
	int width;
	int height;
public:
	Diamond() 
	{
		width = 0;
		height = 0;
	}
	Diamond(int w, int h)
	{
		width = w;
		height = h;
		setArea(w * h / 2);
		setXY(getX() - width, getY() - height);
	}
	~Diamond() {}
	int getWidth() { return width; }
	virtual void draw();
	virtual void showName();
	virtual void setXYNatural()
	{
		setXY(getX() - width, getY() - height);
	}
};
