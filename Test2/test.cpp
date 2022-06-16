#pragma region Includes&Namespaces

#include <gtest/gtest.h>

#include "pch.h"

#include "../../CPP-Yandex-White/SortAbs.h"

#include "../../CPP-Yandex-White/SortLower.h"

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