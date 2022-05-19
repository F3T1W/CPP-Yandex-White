#pragma once
#include <string>
#include <vector>
#include <iostream>
class SecondF
{
public:
	static short FindSecond(std::string x)
	{
		std::vector<int> index;
		short i = 0;
		for (char p : x)
		{
			if (p == 'f')
			{
				index.push_back(i);
			}
			i++;
		}
		if (index.size() == 0)
		{
			std::cout << -2;
			return -2;
		}
		(index.size() == 1) ? std::cout << -1 : std::cout << (index[1]);
		return (index.size() == 1) ? -1 : index[1];
	}
};

