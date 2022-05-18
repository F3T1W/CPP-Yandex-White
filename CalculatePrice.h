#pragma once
#include <string>
#include <iostream>
class CalculatePrice
{
public:
	static std::string Calculate(float n, float a, float b, float x, float y)
	{
		if (n > b)
		{
			n -= ((n * y) / 100);
			std::cout << n << std::endl;
			return std::to_string(n);
		}
		else if (n > a)
		{
			n -= ((n * x) / 100);
			std::cout << n << std::endl;
			return std::to_string(n);
		}
		else
		{
			std::cout << n;
			return std::to_string(n);
		}
	}
};

