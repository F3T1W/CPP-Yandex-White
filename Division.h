#pragma once
#include <iostream>
#include <string>
class Division
{
public:
	static std::string Divide(int a, int b)
	{
		if (b == 0)
		{
			return "Impossible";
		}
		else
		{
			return std::to_string(a / b);
		}
	}
};

