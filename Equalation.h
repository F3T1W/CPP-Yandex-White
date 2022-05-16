#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>

class Equalation
{
public:
	static std::string Calculate(float a, float b, float c)
	{
		if (a != 0)
		{
			double y = (-b + std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);
			double z = (-b - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);
			
			if (isnan(y) || isnan(z))
			{
				std::cout << "";
				return "";
			}
			if (z != y)
			{
				std::cout << y << " " << z;
				return std::to_string(y) + " " + std::to_string(z);
			}
			else
			{
				std::cout << z;
				return std::to_string(z);
			}
		}
		else
		{
			double notNullB = -c / b;
			if (b != 0)
			{
				std::cout << std::to_string(notNullB);
				return std::to_string(notNullB);
			}
			else
			{
				std::cout << "";
				return "";
			}
		}
	}
};

