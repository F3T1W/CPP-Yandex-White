#include "pch.h"
#include <gtest/gtest.h>
#include <../../../../../../CPP-Yandex-White/APlusB.h>

#pragma region cplusb
TEST(WhiteTests, APLUSB0) 
{
	EXPECT_EQ(true, APlusB::Plus(1, 3) == 4);
}

TEST(WhiteTests, APLUSB1)
{
	EXPECT_EQ(true, APlusB::Plus(1, 8) == 9);
}

#pragma endregion