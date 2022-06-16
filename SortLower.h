#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class SortLowerCase
{
public:
	static void DoIt(istream& in, ostream& out)
	{
		int i = 0; in >> i;
		vector<string> strings(i);
		for (auto& x : strings)
		{
			in >> x;
		}
		sort(begin(strings), end(strings), [](const string& x, const string& y) -> bool {
			size_t sz = min(x.size(), y.size());
			for (size_t i = 0; i < sz; ++i)
			{
				auto lower_x = tolower(x[i]);
				auto lower_y = tolower(y[i]);
				if (lower_x < lower_y)
				{
					return true;
				}
				else if (lower_x > lower_y)
				{
					return false;
				}
			}
			return x != y;
			});
		for (const auto& x : strings)
		{
			out << x << " ";
		}
	}
};

