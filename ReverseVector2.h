#pragma once

#include <vector>
#include <algorithm>

using namespace std;

class ReverseVector2
{
public:
	static vector<int> Reversed(vector<int> v)
	{
		reverse(begin(v), end(v));
		return v;
	}
};

