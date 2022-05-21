#pragma once
#include <string>

class PalindromTask
{
public:
	static bool IsPalindrome(std::string str)
	{
		bool IsPali = true;
		for (int i = 0; i < str.length() / 2; ++i)
		{
			if (str[i] != str[str.length() - 1 - i])
			{
				IsPali = false;
			}
		}
		return IsPali;
	}
};

