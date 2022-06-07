#pragma region Includes&Namespaces

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

#include "../../CPP-Yandex-White/QueueTask.h"

#include "../../CPP-Yandex-White/CalendarTask.h"

#include "../../CPP-Yandex-White/Annagrammas.h"

#include "../../CPP-Yandex-White/CapitalMap.h"

#include "../../CPP-Yandex-White/BusStops.h"

#include "../../CPP-Yandex-White/BusStops2.h"

using namespace std;

#pragma endregion

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
/*
TEST(MIDDLETEMPERATURE, MIDDLETEMPERATURE0)
{
	int i = 5;
	vector<int> arr = { 7, 6, 0, 3, 9 };
	EXPECT_EQ(true, MiddleTemperatureTask::MiddleTemperatureTest(i, arr) == "3014");
}
*/
#pragma endregion

#pragma region Queue
/*
TEST(QUEUE, QUEUE0)
{
	streambuf* backup;
	istringstream oss("8 COME 5 WORRY 1 WORRY 4 COME -2 WORRY_COUNT COME 3 WORRY 3 WORRY_COUNT");
	backup = cin.rdbuf();
	cin.rdbuf(oss.rdbuf());
	string check = QueueTask::QueueTest();
	EXPECT_EQ(true, check == "12");
}
*/
#pragma endregion

#pragma region Calendar
/*
TEST(CALENDAR, CALENDAR0)
{
	streambuf* backup;
	istringstream oss("12 ADD 5 Salary ADD 31 Walk ADD 30 WalkPreparations NEXT DUMP 5 DUMP 28 NEXT DUMP 31 DUMP 30 DUMP 28 ADD 28 Payment DUMP 28");
	backup = cin.rdbuf();
	cin.rdbuf(oss.rdbuf());
	CalendarTask::DoIt();
	EXPECT_EQ(true, true);
}
*/
#pragma endregion

#pragma region Anagrama
/*
TEST(ANNAGRAMA, ANNAGRAMA0) {
	streambuf* backup;
	istringstream oss("3 eat tea find search master stream");
	backup = cin.rdbuf();
	cin.rdbuf(oss.rdbuf());
	EXPECT_EQ(Annagrammas::DOITTest() == "YESNOYES", true);
}
*/
#pragma endregion

#pragma region CapitalMap
/*
TEST(CAPITAL, CAPITAL0)
{
	streambuf* backup;
	istringstream oss("24 RENAME FakeCountry FarFarAway ABOUT FarFarAway DUMP CHANGE_CAPITAL TsardomOfRussia Moscow CHANGE_CAPITAL TsardomOfRussia Moscow CHANGE_CAPITAL ColonialBrazil Salvador CHANGE_CAPITAL TsardomOfRussia SaintPetersburg RENAME TsardomOfRussia RussianEmpire CHANGE_CAPITAL RussianEmpire Moscow CHANGE_CAPITAL RussianEmpire SaintPetersburg CHANGE_CAPITAL ColonialBrazil RioDeJaneiro DUMP RENAME ColonialBrazil EmpireOfBrazil ABOUT RussianEmpire RENAME EmpireOfBrazil UnitedStatesOfBrazil CHANGE_CAPITAL RussianEmpire Petrograd RENAME RussianEmpire RussianRepublic RENAME RussianRepublic USSR CHANGE_CAPITAL USSR Moscow CHANGE_CAPITAL UnitedStatesOfBrazil Brasilia RENAME UnitedStatesOfBrazil FederativeRepublicOfBrazil ABOUT RussianEmpire DUMP RENAME USSR USSR");
	backup = cin.rdbuf();
	cin.rdbuf(oss.rdbuf());
	CapitalMap::CapitalTask();
	EXPECT_EQ(true, true);

}
*/
#pragma endregion

#pragma region BusStops
/*
TEST(BUS, BUS0)
{
	streambuf* backup;
	istringstream oss("10 ALL_BUSES BUSES_FOR_STOP Marushkino STOPS_FOR_BUS 32K NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo BUSES_FOR_STOP Vnukovo NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo STOPS_FOR_BUS 272 ALL_BUSES");
	backup = cin.rdbuf();
	cin.rdbuf(oss.rdbuf());
	BusStops::DoIt();
	EXPECT_EQ(true, true);
}
*/
#pragma endregion

#pragma region BusStops2
TEST(BUS, BUS20) {
	istringstream iss("4 2 Marushkino Kokoshkino 1 Kokoshkino 2 Marushkino Kokoshkino 2 Kokoshkino Marushkino");
	ostringstream oss;
	BusStops2::DoIt(iss, oss);
	EXPECT_EQ(oss.str(), "New bus 1\nNew bus 2\nAlready exists for 1\nNew bus 3\n");
}
#pragma endregion