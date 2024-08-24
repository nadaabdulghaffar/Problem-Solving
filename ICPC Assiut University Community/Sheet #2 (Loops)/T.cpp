#include <iostream>

int main()
{
    int n ;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < n -1 - i; spaces++)
            std::cout << " ";
        for (int stars = 0; stars< 2 * i + 1; stars++) 
            std::cout << "*";
        std::cout << std::endl;   
    }

}