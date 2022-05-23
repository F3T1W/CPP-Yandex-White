#pragma once

#include <vector>

#include <iostream>

#include <string>

using namespace std;

class MiddleTemperatureTask
{
public:
	static void MiddleTemperature()
	{
		int i;
		cin >> i;
		vector<int> arr(i);
		for (auto& i : arr) {
			cin >> i;
		}
		size_t sum = 0;
		for (auto i : arr) {
			sum += i;
		}
		sum /= arr.size();
		vector<int> res;
		for (int i = 0; i < arr.size(); ++i) {
			if (arr[i] > sum) res.push_back(i);
		}
		cout << res.size() << endl;
		for (auto i : res) {
			cout << i << " ";
		}
	}

	static string MiddleTemperatureTest(int i, vector<int> arr)
	{
		size_t sum = 0;
		for (auto i : arr) {
			sum += i;
		}
		sum /= arr.size();
		vector<int> res;
		for (int i = 0; i < arr.size(); ++i) {
			if (arr[i] > sum) res.push_back(i);
		}
		cout << res.size() << endl;
		for (auto i : res) {
			cout << i << " ";
		}
		string returning = "";
		returning += to_string(res.size());
		for (auto& x : res)
		{
			returning += to_string(x);
		}
		return returning;
	}
};