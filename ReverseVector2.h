#pragma once

#include <vector>
#include <algorithm>

using namespace std;

class ReverseVector2
{
public:
	static vector<int> Reversed(const vector<int>& v)
	{
		vector<int> returning;
		for (auto x : v)
		{
			returning.push_back(x);
		}
		reverse(begin(returning), end(returning));
		return returning;
	}
};

