#pragma once
#include <string>
#include <iostream>
class EvenNumbers
{
public:
	static std::string IsEven(short x, short y)
	{
		std::string ret;
		for (int i = x; i <= y; i++)
		{
			if (i % 2 == 0)
			{
				if (ret == "")
				{
					ret += std::to_string(i);
					std::cout << i;
				}
				else
				{
					ret += " " + std::to_string(i);
					std::cout << " " << i;
				}
				
			}
		}
		return ret;
	}
};

