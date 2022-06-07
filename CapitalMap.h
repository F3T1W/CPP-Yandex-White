#pragma once
#include <iostream>
#include <map>

using namespace std;

class CapitalMap
{
public:
	static void CapitalTask()
	{
		map<string, string>  mapka;
		int tasksNum = 0;
		cin >> tasksNum;
		for (int i = 0; i < tasksNum; ++i)
		{
			string command = "";
			cin >> command;
			if (command == "CHANGE_CAPITAL")
			{
				string country = ""; string new_capital = ""; cin >> country >> new_capital;
				if (mapka.count(country) == 0) {
					cout << "Introduce new country " << country << " with capital " << new_capital << endl;
				}
				else {
					const string& old_capital = mapka[country];
					if (old_capital == new_capital) {
						cout << "Country " << country << " hasn't changed its capital" << endl;
					}
					else {
						cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
					}
				}
				mapka[country] = new_capital;
			}
			if (command == "RENAME")
			{
				string old_country_name; string new_country_name; cin >> old_country_name >> new_country_name;
				if (old_country_name == new_country_name || mapka.count(old_country_name) == 0 || mapka.count(new_country_name) == 1) {
					cout << "Incorrect rename, skip" << endl;
				}
				else {
					cout << "Country " << old_country_name << " with capital " << mapka[old_country_name] <<
						" has been renamed to " << new_country_name << endl;
					auto nodeHandler = mapka.extract(old_country_name);
					nodeHandler.key() = new_country_name;
					mapka.insert(std::move(nodeHandler));
				}
			}
			if (command == "ABOUT")
			{
				string country; cin >> country;
				if (mapka.count(country) == 0) {
					cout << "Country " << country << " doesn't exist" << endl;
				}
				else {
					cout << "Country " << country << " has capital " << mapka[country] << endl;
				}
			}
			if (command == "DUMP")
			{
				if (mapka.empty()) {
					cout << "There are no countries in the world" << endl;
				}
				else {
					for (const auto& country_item : mapka) {
						cout << country_item.first << "/" << country_item.second << " ";
					}
					cout << endl;
				}
			}
		}
	}
};