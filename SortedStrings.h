#pragma once

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class SortedStrings
{
public:
    void AddString(const string& s)
    {
        inner.push_back(s);
    }

    vector<string> GetSortedStrings()
    {
        sort(begin(inner), end(inner));
        return inner;
    }

private:
    vector<string> inner;
};