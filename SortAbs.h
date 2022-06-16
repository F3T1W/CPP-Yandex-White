#pragma once

#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

class SortAbs {
public:
	static void DoIt(istream& in, ostream& out)
	{
		vector<int> nums;
		int count = 0; in >> count;
		nums.reserve(count);
		for (int i = 0; i < count; ++i)
		{
			int temp = 0; in >> temp;
			nums.push_back(temp);
		}
		sort(begin(nums), end(nums), [](int i, int j) {return abs(i) < abs(j); });
		for (const auto& x : nums)
		{
			out << x << " ";
		}
	}
};
