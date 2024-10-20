#include <iostream>

void  invertedPyramid(int number, int currentSpaces)
{
    if (number <= 0)
        return;
    for (int spaces = 0; spaces < currentSpaces; spaces++)
    {
        std::cout << " ";
    }

    for (int stars = 0; stars < (number * 2) - 1; stars++)
    {
        std::cout << "*";
    }

    std::cout <<"\n";
    invertedPyramid(number - 1, currentSpaces+1);
}

int main()
{
    int number; 
    std::cin >> number;

    invertedPyramid(number, 0);
}