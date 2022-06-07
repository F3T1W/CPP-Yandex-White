#pragma once
#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class BusStops
{
public:
	static void DoIt()
	{
		map<string, vector<string>> stopsBuses;
		map<string, vector<string>> busesStops;


		int q;
		cin >> q;
		for (int i = 0; i < q; ++i) {
			string y;
			cin >> y;
			if (y == "NEW_BUS") {
				string bus;
				cin >> bus;

				int count;
				cin >> count;

				vector<string> stops(count);
				for (auto& s : stops) {
					cin >> s;
					stopsBuses[s].push_back(bus);
				}
				busesStops[bus] = stops;
			}
			if (y == "BUSES_FOR_STOP")
			{
				string stop;
				cin >> stop;
				if (!stopsBuses.count(stop)) cout << "No stop" << endl;
				else {
					for (const auto& b : stopsBuses[stop]) {
						cout << b << " ";
					}
					cout << endl;
				}
			}
			if (y == "STOPS_FOR_BUS")
			{
				string bus;
				cin >> bus;
				if (!busesStops.count(bus)) {
					cout << "No bus" << endl;
				}
				else {
					for (const auto& stop : busesStops[bus]) {
						cout << "Stop " << stop << ": ";
						int count = 0;
						for (const auto& b : stopsBuses[stop]) {
							if (b == bus) continue;
							else {
								cout << b << " ";
								count++;
							}
						}
						if (!count) {
							cout << "no interchange";
						}
						cout << endl;
					}
				}
			}
			if (y == "ALL_BUSES")
			{
				if (busesStops.empty()) {
					cout << "No buses" << endl;
				}
				else {
					for (const auto& b : busesStops) {
						cout << "Bus " << b.first << ": ";
						for (const auto& s : busesStops[b.first]) {
							cout << s << " ";
						}
						cout << endl;
					}
				}
			}
		}
	}
	static string DoItTest()
	{
		string retu = "";
		map<string, vector<string>> busesStops;
		int counter = 0; cin >> counter;
		for (int i = 0; i < counter; ++i)
		{
			string y = ""; cin >> y;
			if (y == "NEW_BUS")
			{
				string busNumber = ""; cin >> busNumber; int stopNumbers = 0; cin >> stopNumbers;
				for (int j = 0; j < stopNumbers; ++j)
				{
					string stopName = ""; cin >> stopName;
					if (busesStops.find(busNumber) != busesStops.end())
					{
						busesStops[busNumber].push_back(stopName);
					}
					else
					{
						busesStops[busNumber] = { stopName };
					}
				}
			}
			if (y == "BUSES_FOR_STOP")
			{
				bool finded = false;
				string stop; cin >> stop;
				for (const auto& [bus, stops] : busesStops)
				{
					for (const auto& x : stops)
					{
						if (x == stop)
						{
							finded = true;
							retu += bus + " ";
							cout << bus << " ";
						}
					}
				}
				cout << "\n";
				if (finded == false)
				{
					retu += "No stop\n";
					cout << "No stop" << endl;
				}
			}
			if (y == "STOPS_FOR_BUS")
			{
				string bus;
				cin >> bus;
				if (!busesStops.count(bus)) {
					cout << "No bus" << endl;
				}
				else {
					for (const auto& stop : busesStops[bus]) {
						cout << "Stop " << stop << ": ";
						int count = 0;
						for (const auto& b : busesStops[stop]) {
							if (b == bus) continue;
							else {
								cout << b << " ";
								count++;
							}
						}
						if (!count) {
							cout << "no interchange";
						}
						cout << endl;
					}
				}
			}
			if (y == "ALL_BUSES")
			{
				if (busesStops.empty())
				{
					retu += "No buses";
					cout << "No buses";
				}
				else
				{
					for (const auto& [key, value] : busesStops)
					{
						retu += "Bus " + key + ": ";
						cout << "Bus " << key << ": ";
						for (const auto& x : value)
						{
							retu += x + " ";
							cout << x << " ";
						}
						retu += "\n";
						cout << endl;
					}
				}
			}
		}
		return retu;
	}
};