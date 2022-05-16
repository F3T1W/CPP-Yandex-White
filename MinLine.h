#pragma once
#include <iostream>
#include <string>

class MinLine
{
public:
	static std::string FindMinString(std::string x, std::string y , std::string z)
	{
		std::cin >> x >> y >> z;
		std::string min;
		if (x < y)
		{
			min = x;
		}
		else 
		{
			min = y;
		}
		if (min < z)
		{
			return min;
		}
		else
		{
			return z;
		}
	}
};

