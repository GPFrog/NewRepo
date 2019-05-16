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

static int hasNotPlus(std::string complex)
{
	for (int i = 1; i < complex.size(); i++)
	{
		if (complex.at(i) == '+')
			return 0;
		else if (complex.at(i) == '-')
		{
			return i;
		}
	}
}