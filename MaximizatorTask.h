#pragma once
class MaximizatorTask
{
public:
	static void UpdateIfGreater(int x, int& y)
	{
		if (x > y)
		{
			y = x;
		}
	}
};

