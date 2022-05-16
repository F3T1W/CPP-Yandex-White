#include <string>
#include <iostream>
#include <iomanip>

static std::string Calculate(float, float, float);

int main(void)
{
	std::string x = Calculate(0, 4, 10);
}

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
			std::cout << std::setprecision(2) << y << " " << std::setprecision(2) << z;
			return std::to_string(y) + " " + std::to_string(z);
		}
		else
		{
			std::cout << std::setprecision(2) << z;
			return std::to_string(z);
		}
	}
	else
	{
		double notNullB = -c / b;
		if (b != 0)
		{
			std::cout << std::setprecision(2) << notNullB;
			return std::to_string(notNullB);
		}
		else
		{
			std::cout << "";
			return "";
		}
	}
}