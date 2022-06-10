#pragma once

#include <iostream>
#include <string>
#include <set>

using namespace std;

class UniqueString
{
public:
	static void Count(std::istream& in, std::ostream& out)
	{
		int countString; in >> countString;
		set<string> strings;
		for (int i = 0; i < countString; ++i)
		{
			string temp; in >> temp;
			strings.insert(temp);
		}
		out << strings.size();
	}
};

