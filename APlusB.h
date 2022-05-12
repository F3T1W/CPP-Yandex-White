#pragma once
#include <iostream>

class APlusB
{
public:
	static int Plus(int a, int b)
	{
		std::cout << a + b << std::endl;
		return a + b;
	}
};

