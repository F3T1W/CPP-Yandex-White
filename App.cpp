#include <iostream>

void MaxDivider();

int main(void)
{
    MaxDivider();
}

void MaxDivider() {

    int a, b;
    std::cin >> a >> b;
    while (b) {
        a %= b;
        int temp = a;
        a = b;
        b = temp;
    }

    std::cout << a << std::endl;
}