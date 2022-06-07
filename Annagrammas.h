#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Annagrammas
{
public:
	static void DOIT()
	{
		int words = 0; cin >> words;
		for (int i = 0; i < words; ++i)
		{
			map<char, int> fMap; map<char, int> sMap;
			string first, second; cin >> first >> second;
			for (const auto& firsta : first)
			{
				fMap[firsta] = std::count(first.begin(), first.end(), firsta);
			}
			for (const auto& seconda : second)
			{
				sMap[seconda] = std::count(second.begin(), second.end(), seconda);
			}
			(fMap == sMap) ? cout << "YES" << endl : cout << "NO" << endl;
		}
	}

	static string DOITTest()
	{
		string retu = "";
		int words = 0; cin >> words;
		for (int i = 0; i < words; ++i)
		{
			map<char, int> fMap; map<char, int> sMap;
			string first, second; cin >> first >> second;
			for (const auto& firsta : first)
			{
				fMap[firsta] = std::count(first.begin(), first.end(), firsta);
			}
			for (const auto& seconda : second)
			{
				sMap[seconda] = std::count(second.begin(), second.end(), seconda);
			}
			(fMap == sMap) ? retu += "YES" : retu += "NO";
		}
		return retu;
	}
};

