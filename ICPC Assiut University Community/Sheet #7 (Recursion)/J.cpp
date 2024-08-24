#include <iostream>

long long factorial(long n)
{
    if (n == 1)
        return n;
    return n * factorial(n-1); 
}

int main()
{
    int n;
    std::cin>> n;
    std::cout << factorial(n);
    return 0;
}
