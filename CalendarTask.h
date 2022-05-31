#pragma once
#include <iostream>
#include <vector>
#include <array>

using namespace std;

class CalendarTask
{
private:
	inline static const std::array<int, 12> _lengths = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
public:
	static void DoIt()
	{
		int count; cin >> count;
		vector<vector<string>> month(_lengths.size());
		for (int i = 0; i < _lengths.size(); ++i)
		{
			month[i] = vector<string>(_lengths[i]);
		}
		for (int i = 0; i < count; ++i)
		{
			string command = "";
			cin >> command;

			if (command == "ADD")
			{ 
				int num = 0;
				string action;
				cin >> num >> action;

			}
			if (command == "DUMP")
			{
				int num = 0;
				cin >> num;
			}
			if (command == "NEXT")
			{

			}
		}
	}
};
