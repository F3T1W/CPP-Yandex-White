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
			double y, z;
			y = (-b + std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);
			z = (-b - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);
			
			if (isnan(y) || isnan(z))
			{
				std::cout << "";
				return "";
			}
			if (z != y)
			{
				std::string x = std::to_string((-b + std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a)) + " " + std::to_string((-b - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a));
				std::cout << ((-b + std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a)) << " " << ((-b - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a));
				return x; // TODO сократить икс и возврат и сделать правильный возврат
			}
			else
			{
				std::string x = std::to_string((-b - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a));
				std::cout << ((-b - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a));
				return x;
			}
		}
		else
		{
			if (b != 0)
			{
				std::cout << std::to_string(-c / b);
				return std::to_string(- c / b);
			}
			else
			{
				std::cout << "";
				return "";
			}
		}
	}
};

