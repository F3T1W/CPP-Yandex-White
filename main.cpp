#include "BusStops2.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	istringstream iss("4 2 Marushkino Kokoshkino 1 Kokoshkino 2 Marushkino Kokoshkino 2 Kokoshkino Marushkino");
	ostringstream oss;
	BusStops2::DoIt(iss, oss);
}