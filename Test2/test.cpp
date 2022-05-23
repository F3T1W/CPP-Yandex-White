#include <gtest/gtest.h>

#include "pch.h"

#include "../../CPP-Yandex-White/FactorialTask.h"

#include "../../CPP-Yandex-White/PalindromTask.h"

#include "../../CPP-Yandex-White/VectorPalindrom.h"

#include "../../CPP-Yandex-White/MaximizatorTask.h"

#include "../../CPP-Yandex-White/VectorMoving.h"

#include "../../CPP-Yandex-White/ReverseVector.h"

#include "../../CPP-Yandex-White/ReverseVector2.h"

#include "../../CPP-Yandex-White/MiddleTemperatureTask.h"

using namespace std;

#pragma region Factorial
/*
TEST(FACTORIAL, FACTORIAL0) {
  EXPECT_EQ(true, FactorialTask::Factorial(1) == 1);
}

TEST(FACTORIAL, FACTORIAL1)
{
	EXPECT_EQ(true, FactorialTask::Factorial(-2) == 1);
}

TEST(FACTORIAL, FACTORIAL2)
{
	EXPECT_EQ(true, FactorialTask::Factorial(4) == 24);
}
*/
#pragma endregion

#pragma region Palindrom
/*
TEST(PALINDROM, PLAINDROM0)
{
	EXPECT_EQ(true, PalindromTask::IsPalindrome("madam") == true);
}

TEST(PALINDROM, PLAINDROM1)
{
	EXPECT_EQ(true, PalindromTask::IsPalindrome("gentleman") == false);
}

TEST(PALINDROM, PLAINDROM2)
{
	EXPECT_EQ(true, PalindromTask::IsPalindrome("X") == true);
}
*/
#pragma endregion

#pragma region PalindromVector
/*
TEST(PALINDROMVECTOR, PALINDROMVECTOR0)
{
	std::vector<std::string> test = { "abacaba","aba" };
	std::vector<std::string> exp = { "abacaba" };
	EXPECT_EQ(true, VectorPalindrom::PalindromeFilter(test, 5) == exp);
}

TEST(PALINDROMVECTOR, PALINDROMVECTOR1)
{
	std::vector<std::string> test = { "abacaba", "aba" };
	std::vector<std::string> exp = { "abacaba", "aba" };
	EXPECT_EQ(true, VectorPalindrom::PalindromeFilter(test, 2) == exp);
}

TEST(PALINDROMVECTOR, PALINDROMVECTOR2)
{
	std::vector<std::string> test = { "weew", "bro", "code" };
	std::vector<std::string> exp = { "weew" };
	EXPECT_EQ(true, VectorPalindrom::PalindromeFilter(test, 4) == exp);
}
*/
#pragma endregion

#pragma region Maximizator
/*
TEST(MAXIMIZATOR, MAXIMIZATOR0)
{
	int x = 4;
	int y = 2;
	MaximizatorTask::UpdateIfGreater(x, y);
	EXPECT_EQ(true, y == 4);
}
*/
#pragma endregion

#pragma region VectorMoving
/*
TEST(VECTORMOVING, VECTORMOVING0)
{
	vector<string> source = { "a", "b", "c" };
	vector<string> destination = { "z" };
	VectorMoving::Move(source, destination);
	string result = "";
	for (auto x : destination)
	{
		result += x;
	}
	EXPECT_EQ(true, ((result == "zabc") && (source.size() == 0)) == true);
}
*/
#pragma endregion

#pragma region ReverseVector
/*
TEST(REVERSEVECTOR, REVERSEVECTOR0)
{
	vector<int> numbers = { 1, 5, 3, 4, 2 };
	string result = "";
	ReverseVector::Reverse(numbers);
	for (auto x : numbers)
	{
		result += std::to_string(x);
	}
	EXPECT_EQ(true, result == "24351");
}
*/
#pragma endregion

#pragma region ReverseVector2
/*
TEST(REVERSEVECTOR2, REVERSEVECTOR2_0)
{
	const vector<int> start = { 1, 5, 3, 4, 2 };
	vector<int> end;
	string test = "";
	end = ReverseVector2::Reversed(start);
	for (auto x : end)
	{
		test += to_string(x);
	}
	EXPECT_EQ(true, test == "24351");
}
*/
#pragma endregion

#pragma region MiddleTemperature

TEST(MIDDLETEMPERATURE, MIDDLETEMPERATURE0)
{
	int i = 5;
	vector<int> arr = { 7, 6, 0, 3, 9 };
	EXPECT_EQ(true, MiddleTemperatureTask::MiddleTemperatureTest(i, arr) == "3014");
}

#pragma endregion