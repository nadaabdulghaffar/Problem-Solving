#include <iostream>

int main()
{
    long a,b;
    std::cin >> a >> b;

    long result;
    result = a - b;
    if(result > 0)
        std::cout << result;
    else 
        std::cout << "0";
}