#include <iostream>

int main()
{
    int testcases;
    std::cin >> testcases;

    while(testcases--)
    {
        long width, hight;
        std::cin >> width >> hight;
        if (width == hight)
            std::cout << "Square\n";
        else 
            std::cout << "Rectangle\n";
    }
}