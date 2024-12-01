#include <iostream>
#include <string>
int main()
{
    std::string letters = "abcdefgh";
    std::string numbers = "12345678";

    int testcases;
    std::cin >> testcases;

    while (testcases--)
    {
        std::string inputString;
        std::cin >> inputString;

        for (int i = 0; i < 8; i++)
        {
            if (inputString[0] == letters[i])
                continue;
            else
                std::cout << letters[i] << inputString[1] << std::endl;
        }

        for (int i = 0; i < 8; i++)
        {
            if (inputString[1] == numbers[i])
                continue;
            else
                std::cout << inputString[0] << numbers[i] << std::endl;
        }
    }

    return 0;
}