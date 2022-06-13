#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <set>

using namespace std;

class Sinonim {
public:
	static void SinonimCheck()
	{
		map<string, set<string>> commands;
		int countOfTasks = 0; cin >> countOfTasks;
		for (int i = 0; i < countOfTasks; i++)
		{
			string command = ""; cin >> command;
			if (command == "ADD")
			{
				string word = ""; string word2 = ""; cin >> word >> word2;
				commands[word].insert(word2);
				commands[word2].insert(word);
			}
			if (command == "COUNT")
			{
				string word = ""; cin >> word;
				cout << commands[word].size() << endl;
			}
			if (command == "CHECK")
			{
				string word = ""; string word2 = ""; cin >> word >> word2;
				if (commands[word].count(word2))
				{
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}
		}
	}

	static void SinonimCheck(std::istream& in, std::ostream& out)
	{
		map<string, set<string>> commands;
		int countOfTasks = 0; in >> countOfTasks;
		for (int i = 0; i < countOfTasks; i++)
		{
			string command = ""; in >> command;
			if (command == "ADD")
			{
				string word = ""; string word2 = ""; in >> word >> word2;
				commands[word].insert(word2);
				commands[word2].insert(word);
			}
			if (command == "COUNT")
			{
				string word = ""; in >> word;
				out << commands[word].size() << endl;
			}
			if (command == "CHECK")
			{
				string word = ""; string word2 = ""; in >> word >> word2;
				if (commands[word].count(word2))
				{
					out << "YES" << endl;
				}
				else {
					out << "NO" << endl;
				}
			}
		}
	}
};