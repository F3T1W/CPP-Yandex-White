#pragma once
#include <vector>
#include <string>
class VectorPalindrom
{
public:
	static std::vector<std::string> PalindromeFilter(std::vector<std::string> words, int minLength)
	{
		std::vector<std::string> returning;
		for (auto x : words)
		{
			bool IsPali = true;
			for (int i = 0; i < x.length() / 2; ++i)
			{
				if (x[i] != x[x.length() - 1 - i])
				{
					IsPali = false;
				}
			}
			if (IsPali == true && x.length() >= minLength) returning.push_back(x);
		}
		return returning;
	}
};

