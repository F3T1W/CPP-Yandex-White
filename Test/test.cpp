#include "pch.h"
#include <gtest/gtest.h>
#include <../../../../../../CPP-Yandex-White/APlusB.h>
#include <../../../../../../CPP-Yandex-White/MinLine.h>
#include <../../../../../../CPP-Yandex-White/Equalation.h>


#pragma region cplusb
/*
TEST(APLUSB, APLUSB0) 
{
	EXPECT_EQ(true, APlusB::Plus(1, 3) == 4);
}

TEST(APLUSB, APLUSB1)
{
	EXPECT_EQ(true, APlusB::Plus(1, 8) == 9);
}
*/
#pragma endregion

#pragma region FindMinLeng
/*
TEST(FINDMIN, FINDMIN0)
{
	EXPECT_EQ(true, MinLine::FindMinString("milk", "milkshake", "month") == "milk");
}

TEST(FINDMIN, FINDMIN1)
{
	EXPECT_EQ(true, MinLine::FindMinString("c", "a", "b") == "a");
}

TEST(FINDMIN, FINDMIN2)
{
	EXPECT_EQ(true, MinLine::FindMinString("fire", "fog", "wood") == "fire");
}
*/
#pragma endregion

#pragma region Calculate

TEST(CALCULATE, CALCULATE0)
{
	EXPECT_EQ(true, Equalation::Calculate(2, 5, 2) == "-0.500000 -2.000000");
}

TEST(CALCULATE, CALCULATE1)
{
	EXPECT_EQ(true, Equalation::Calculate(2, 4, 2) == "-1.000000");
}

TEST(CALCULATE, CALCULATE2)
{
	EXPECT_EQ(true, Equalation::Calculate(2, 1, 2) == "");
}

TEST(CALCULATE, CALCULATE3)
{
	EXPECT_EQ(true, Equalation::Calculate(0, 4, 10) == "-2.500000");
}

#pragma endregion