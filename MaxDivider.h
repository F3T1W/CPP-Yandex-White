#pragma once
#include <vector>
#include <iostream>
class MaxDividerFinder
{
public:
	static short MaxDivider(short a, short b)
	{
        while (b) {
            a %= b;
            int temp = a;
            a = b;
            b = temp;
        }

        std::cout << a << std::endl;
        return a;
    }
};

