#include "pch.h"
#include <gtest/gtest.h>
#include "../../CPP-Yandex-White/FactorialTask.h"
#include "../../CPP-Yandex-White/PalindromTask.h">
#include "../../CPP-Yandex-White/VectorPalindrom.h">

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
#pragma endregion