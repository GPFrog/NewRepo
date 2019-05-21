#pragma once
#include <iostream>

class Figure
{
private:
	int a = 0;
public:
	virtual void draw() = 0;
};