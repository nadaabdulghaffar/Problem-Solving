#include <iostream>

int main()
{
    long number;

    std::cin >> number;

    while (number >= 1) {
        std::cout << number << ' ';

        if (number == 1) {
            return 0;
        }
        if (number % 2 == 1) {
            number = 3 * number + 1;
        } else {
            number /= 2;
        }
    }
}