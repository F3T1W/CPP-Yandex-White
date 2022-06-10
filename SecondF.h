#pragma once
#include <string>
#include <vector>
#include <iostream>
class SecondF
{
public:
    static size_t FindSecond(std::string x)
    {
        size_t first_f = x.find('f');
        if (first_f == std::string::npos) { // npos аналог .end, можешь почитать доку на std::string::find
            return -2;
        }
        size_t second_f = x.find('f', first_f + 1);
        if (second_f == std::string::npos) {
            return -1;
        }
        return second_f;
    }
};

