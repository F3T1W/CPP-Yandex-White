#pragma once

#include <iostream>

#include <algorithm>

#include <vector>

#include <string>

#include <math.h>

using namespace std;

class QueueTask
{
public:
	static void Queue()
	{
		int worry = 1;
		int quiet = 0;
		int x = 0;
		cin >> x;
		vector<int> query;
		vector<int> out;
		for (int i = 0; i < x; ++i)
		{
			string command = "";
			cin >> command;

			if (command == "COME")
			{
				int num = 0;
				cin >> num;
				if (num >= 0)
				{
					for (int i = 0; i < num; ++i)
					{
						query.push_back(quiet);
					}
				}
				else
				{
					for (int i = 0; i < fabs(num); ++i)
					{
						query.pop_back();
					}
				}
			}
			if (command == "WORRY")
			{
				int num = 0;
				cin >> num;
				query[num] = 1;
			}
			if (command == "QUIET")
			{
				int num = 0;
				cin >> num;
				query[num] = 0;
			}
			if (command == "WORRY_COUNT")
			{
				out.push_back(count(begin(query), end(query), 1));
			}
		}
		for (auto x : out)
		{
			cout << x << endl;
		}
	}

	static string QueueTest()
	{
		string check = "";
		int worry = 1;
		int quiet = 0;
		int x = 0;
		cin >> x;
		vector<int> query;
		vector<int> out;
		for (int i = 0; i < x; ++i)
		{
			string command = "";
			cin >> command;

			if (command == "COME")
			{
				int num = 0;
				cin >> num;
				if (num >= 0)
				{
					for (int i = 0; i < num; ++i)
					{
						query.push_back(quiet);
					}
				}
				else
				{
					for (int i = 0; i < fabs(num); ++i)
					{
						query.pop_back();
					}
				}
			}
			if (command == "WORRY")
			{
				int num = 0;
				cin >> num;
				query[num] = 1;
			}
			if (command == "QUIET")
			{
				int num = 0;
				cin >> num;
				query[num] = 0;
			}
			if (command == "WORRY_COUNT")
			{
				check += to_string(count(begin(query), end(query), 1));
				out.push_back(count(begin(query), end(query), 1));
			}
		}
		for (auto x : out)
		{
			cout << x << endl;
		}
		return check;
	}
};

