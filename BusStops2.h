#pragma once
#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class BusStops2
{
public:
	static void DoIt(std::istream& in, std::ostream& out)
	{
		map<int, vector<string>> busStops;
		int numCommands = 0; in >> numCommands;
		int currKey = 1;
		for (int i = 0; i < numCommands; ++i)
		{
			vector<string> temp;
			int busNums = 0; in >> busNums;
			for (int j = 0; j < busNums; ++j)
			{
				string stop = ""; in >> stop;
				temp.push_back(stop);
			}
			
			auto it = busStops.begin();
			for (; it != busStops.end(); ++it)
			{
				if (temp == it->second)
				{
					out << "Already exists for " << it->first << endl;
					break;
				}
			}
			if (it == busStops.end()) {
				busStops[currKey] = temp;
				out << "New bus " << currKey << endl;
				++currKey;
			}
		}
	}
};