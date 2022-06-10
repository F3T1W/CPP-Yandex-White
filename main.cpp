#include <iostream>
#include <string>
#include <set>
#include <iostream>

using namespace std;

static void Count();

int main()
{
	Count();
}

static void Count()
{
	int countString; cin >> countString;
	set<string> strings;
	for (int i = 0; i < countString; ++i)
	{
		string temp; cin >> temp;
		strings.insert(temp);
	}
	cout << strings.size();
}