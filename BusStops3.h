#pragma once

#include <iostream>
#include <sstream>
#include <set>
#include <map>

using namespace std;

class BusStops3
{
public:
	static void DoIt()
	{
        int counter = 1;
        map<set<string>, int> buses;

        int num = 0; cin >> num;

        for (int i = 0; i < num; ++i) {
            int count;
            cin >> count;
            set<string> stops;
            for (int j = 0; j < count; ++j) {
                string stop; cin >> stop;
                stops.insert(stop);
            }

            if (!buses.count(stops)) {
                buses[stops] = counter;
                cout << "New bus " << counter << endl;
                counter++;
            }
            else {
                cout << "Already exists for " << buses[stops] << endl;
            }
        }
	}

    static void DoIt(istream& in, ostream& out)
    {
        int counter = 1;
        map<set<string>, int> buses;

        int num = 0; in >> num;

        for (int i = 0; i < num; ++i) {
            int count;
            in >> count;
            set<string> stops;
            for (int j = 0; j < count; ++j) {
                string stop; in >> stop;
                stops.insert(stop);
            }

            if (!buses.count(stops)) {
                buses[stops] = counter;
                out << "New bus " << counter << endl;
                counter++;
            }
            else {
                out << "Already exists for " << buses[stops] << endl;
            }
        }
    }
};

