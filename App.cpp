#include <string>
#include <iostream>

static std::string Calculate(float n, float a, float b, float x, float y);

int main(void)
{
	float n, a, b, x, y;
	std::cin >> n >> a >> b >> x >> y;
	Calculate(n, a, b, x, y);
}

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