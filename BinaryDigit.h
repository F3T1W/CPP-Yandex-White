#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class BinaryDigit
{
public:
	static std::string Binary(int x)
	{
		bool schet = false;
		std::vector<int> oneNull;
		while (x > 1)
		{
			oneNull.push_back(x % 2);
			x /= 2;
		}
		oneNull.push_back(1);
		std::reverse(oneNull.begin(), oneNull.end());
		std::string returning;
		for (int i = 0; i < oneNull.size(); ++i)
		{
			if (schet == true)
			{
				returning += std::to_string(oneNull[i]);
			}
			else {
				if (oneNull[i] == 0)
				{
					continue;
				}
				else
				{
					returning += std::to_string(oneNull[i]);
					schet = true;
				}
			}
		}
		return returning;
		std::cout << returning;
	}
};

