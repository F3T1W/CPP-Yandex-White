#pragma region Includes&Namespaces

#include <gtest/gtest.h>

#include "pch.h"

#include "../../CPP-Yandex-White/SortAbs.h"

#include "../../CPP-Yandex-White/SortLower.h"
#include "../SortedStrings.h"
#include "../NameSurname0.h"

using namespace std;

#pragma endregion

#pragma region SortAbs
/*
TEST(SORTABS, SORTABS0)
{
	istringstream iss("2 -4 3");
	ostringstream oss;
	SortAbs::DoIt(iss, oss);
	EXPECT_EQ(oss.str(), "3 -4 ");
}

TEST(SORTABS, SORTABS1)
{
	istringstream iss("3 1 -3 2");
	ostringstream oss;
	SortAbs::DoIt(iss, oss);
	EXPECT_EQ(oss.str(), "1 2 -3 ");
	
}
*/
#pragma endregion

#pragma region SortLower
/*
TEST(SORTLOWER, SORTLOWER0)
{
	istringstream iss("2 qq Aa");
	ostringstream oss;
	SortLowerCase::DoIt(iss, oss);
	EXPECT_EQ(oss.str(), "Aa qq ");
}

TEST(SORTLOWER, SORTLOWER1)
{
	istringstream iss("3 aA Cc bb");
	ostringstream oss;
	SortLowerCase::DoIt(iss, oss);
	EXPECT_EQ(oss.str(), "aA bb Cc ");
}
*/
#pragma endregion

#pragma region SortedStrings
/*
	ostream& PrintSortedStrings(SortedStrings& strings, ostream& out) {
	for (const string& s : strings.GetSortedStrings()) {
		out << s << " ";
	}
	return out << endl;
}

TEST(SORTEDSTRINGS, SORTEDSTRINGS0)
{
	ostringstream oss;
	SortedStrings strings;

	strings.AddString("first");
	strings.AddString("third");
	strings.AddString("second");
	PrintSortedStrings(strings, oss);

	strings.AddString("second");
	PrintSortedStrings(strings, oss);

	EXPECT_EQ(oss.str(), "first second third \nfirst second second third \n");
}
*/
#pragma endregion

#pragma region NameLastName0

	ostream& PrintSortedStrings(ostream& out) {

	Person person;
	person.ChangeFirstName(1965, "Polina");
	person.ChangeLastName(1967, "Sergeeva");
	for (int year : {1900, 1965, 1990}) {
		out << person.GetFullName(year) << endl;
	}

	person.ChangeFirstName(1970, "Appolinaria");
	for (int year : {1969, 1970}) {
		out << person.GetFullName(year) << endl;
	}

	person.ChangeLastName(1968, "Volkova");
	for (int year : {1969, 1970}) {
		out << person.GetFullName(year) << endl;
	}
	return out << endl;
}

TEST(NAMELASTNAME0)
{
	ostringstream oss;

	PrintSortedStrings(oss);

	string s = oss.str();
	
	EXPECT_EQ(oss.str(), "Incognito\nPolina with unknown last name\nPolina Sergeeva\nPolina Sergeeva\nAppolinaria Sergeeva\nPolina Volkova\nAppolinaria Volkova\n\n");
}

#pragma endregion