#pragma once
#include <string>
#include <map>
#include <set>

using namespace std;

class MapValuesSet
{
public:
	static set<string> BuildMapValuesSet(const map<int, string>& m)
	{
		set<string> unique;
		for (const auto& [key, value] : m)
		{
			unique.insert(value);
		}
		return unique;
	}
};

