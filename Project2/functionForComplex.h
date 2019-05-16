#pragma once
#include <string>
static std::string deleteGap(std::string complex)
{
	std::string temp;
	for (int i = 0; i < complex.size(); i++)
	{
		if (complex.at(i) != ' ')
		{
			temp.append(1, complex.at(i));
		}
	}

	return temp;
}