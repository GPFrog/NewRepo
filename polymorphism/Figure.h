#pragma once
#include <iostream>

class Figure
{
private:
	int area;
public:
	Figure()
	{
		std::cout << "Figure ������" << std::endl;
	}
	~Figure()
	{
		std::cout << "Figure �Ҹ���" << std::endl;
	}
	virtual void draw();
};

void Figure::draw()
{
	std::cout << "�ǵ�" << std::endl;
}