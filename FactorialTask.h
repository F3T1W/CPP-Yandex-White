#pragma once
class FactorialTask
{
public:
	static int Factorial(int n)
	{
		if (n > 0)
		{
			return n * Factorial(n - 1);
		}
		else
		{
			return 1;
		}
	}
};

