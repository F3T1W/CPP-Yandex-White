#include "pch.h"
#include <gtest/gtest.h>
#include "../../CPP-Yandex-White/FactorialTask.h"
#include "../../CPP-Yandex-White/PalindromTask.h">

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
TEST(PALINDROM, PLAINDROM0)
{
	EXPECT_EQ(true, PalindromTask::Palindrom("madam") == true);
}

TEST(PALINDROM, PLAINDROM1)
{
	EXPECT_EQ(true, PalindromTask::Palindrom("gentleman") == false);
}

TEST(PALINDROM, PLAINDROM2)
{
	EXPECT_EQ(true, PalindromTask::Palindrom("X") == true);
}
#pragma endregion