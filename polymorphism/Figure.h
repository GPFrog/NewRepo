#pragma once
#include <iostream>

class Figure
{
private:
	int area;
public:
	Figure()
	{
		std::cout << "Figure 생성자" << std::endl;
	}
	~Figure()
	{
		std::cout << "Figure 소멸자" << std::endl;
	}
	virtual void draw();
};

void Figure::draw()
{
	std::cout << "피드" << std::endl;
}