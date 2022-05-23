#include <string>

#include <vector>

#include <iostream>

using namespace std;

static void MiddleTemperature();

int main()
{
	MiddleTemperature();
}

static void MiddleTemperature()
{
	int i;
	cin >> i;
	vector<int> arr(i);
	for (auto& i : arr) {
		cin >> i;
	}
	int sum = 0;
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