#pragma once
#include <vector>
#include <string>
using namespace std;

class VectorMoving
{
public:
	static void Move(vector<string>& source, vector<string>& destination)
	{
		destination.reserve(source.size( )); // Allocating minimal needed memory and not creating new if not necessary
		for (auto x : source)
		{
			destination.push_back(x);
		}
		source.clear();
	}
};
