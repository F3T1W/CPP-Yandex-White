#include "pch.h"
#include <gtest/gtest.h>
#include <../../../../../../CPP-Yandex-White/APlusB.h>
#include <../../../../../../CPP-Yandex-White/MinLine.h>
#include <../../../../../../CPP-Yandex-White/Equalation.h>
#include <../../../../../../CPP-Yandex-White/Division.h>
#include <../../../../../../CPP-Yandex-White/CalculatePrice.h>
#include <../../../../../../CPP-Yandex-White/EvenNumbers.h>
#include <../../../../../../CPP-Yandex-White/SecondF.h>
#include <../../../../../../CPP-Yandex-White/MaxDivider.h>
#include <../../../../../../CPP-Yandex-White/BinaryDigit.h>


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
/*
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
*/
#pragma endregion

#pragma region Divide
/*
TEST(DIVIDE, DIVIDE0)
{
	EXPECT_EQ(true, Division::Divide(10, 2) == "5");
}

TEST(DIVIDE, DIVIDE1)
{
	EXPECT_EQ(true, Division::Divide(3, 5) == "0");
}

TEST(DIVIDE, DIVIDE2)
{
	EXPECT_EQ(true, Division::Divide(11, 0) == "Impossible");
}
*/
#pragma endregion

#pragma region CalculatePrice
/*
TEST(CALCULATEPRICE, CALCULATEPRICE0)
{
	EXPECT_EQ(true, CalculatePrice::Calculate(100, 110, 120, 5, 10) == "100.000000");
}

TEST(CALCULATEPRICE, CALCULATEPRICE1)
{
	EXPECT_EQ(true, CalculatePrice::Calculate(115, 110, 120, 5, 10) == "109.250000");
}

TEST(CALCULATEPRICE, CALCULATEPRICE2)
{
	EXPECT_EQ(true, CalculatePrice::Calculate(150, 110, 120, 5, 12.5) == "131.250000");
}
*/
#pragma endregion

#pragma region CheckEven
/*
TEST(CHECKEVEN, CHECKEVEN0)
{
	EXPECT_EQ(true, EvenNumbers::IsEven(1, 10) == "2 4 6 8 10");
}

TEST(CHECKEVEN, CHECKEVEN1)
{
	EXPECT_EQ(true, EvenNumbers::IsEven(2, 3) == "2");
}

TEST(CHECKEVEN, CHECKEVEN2)
{
	EXPECT_EQ(true, EvenNumbers::IsEven(9, 11) == "10");
}
*/
#pragma endregion

#pragma region FInjection
/*
TEST(SECONDF, SECONDF0)
{
	EXPECT_EQ(true, SecondF::FindSecond("comfort") == -1);
}

TEST(SECONDF, SECONDF1)
{
	EXPECT_EQ(true, SecondF::FindSecond("coffee") == 3);
}

TEST(SECONDF, SECONDF2)
{
	EXPECT_EQ(true, SecondF::FindSecond("car") == -2);
}
*/
#pragma endregion

#pragma region FindMaxDivider
/*
TEST(MAXDIVIDER, MAXDIVIDER0)
{
	EXPECT_EQ(true, MaxDividerFinder::MaxDivider(25, 27) == 1);
}

TEST(MAXDIVIDER, MAXDIVIDER1)
{
	EXPECT_EQ(true, MaxDividerFinder::MaxDivider(12, 16) == 4);
}

TEST(MAXDIVIDER, MAXDIVIDER2)
{
	EXPECT_EQ(true, MaxDividerFinder::MaxDivider(13, 13) == 13);
}
*/
#pragma endregion 

#pragma region BinaryFinder
/*
TEST(BINARYDIGIT, BINARYDIGIT0)
{
	EXPECT_EQ(true, BinaryDigit::Binary(5) == "101");
}

TEST(BINARYDIGIT, BINARYDIGIT1)
{
	EXPECT_EQ(true, BinaryDigit::Binary(32) == "100000");
}

TEST(BINARYDIGIT, BINARYDIGIT2)
{
	EXPECT_EQ(true, BinaryDigit::Binary(1) == "1");
}
*/
#pragma endregion