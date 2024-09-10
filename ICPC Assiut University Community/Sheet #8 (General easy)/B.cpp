#include <iostream>

int main()
{
    int waterMillonWeight;
    std::cin >> waterMillonWeight;
    
    if (waterMillonWeight % 2 == 0 && waterMillonWeight > 2)
        std::cout << "YES" << std::endl;
    else 
        std::cout << "NO" << std::endl;
}