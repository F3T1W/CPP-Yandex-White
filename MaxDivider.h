#pragma once
#include <vector>
#include <iostream>
class MaxDividerFinder
{
public:
	static void MaxDivider(long a, long b)
	{
        int A, B;
        std::cin >> A >> B;
        while (B) {
            A %= B;
            int buff = A;
            A = B;
            B = buff;
        }

        std::cout << A << std::endl;
	}
};

