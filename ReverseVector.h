#pragma once
#include <vector>

using namespace std;

class ReverseVector
{
public:
	static void Reverse(vector<int>& numbers)
	{
		std::reverse(begin(numbers), end(numbers));
	}
};

