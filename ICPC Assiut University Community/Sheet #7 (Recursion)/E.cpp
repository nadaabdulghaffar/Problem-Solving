#include <iostream>
#include <cmath>
void Binary(long n)
{

    if(n == 0)
    { 
        return;
    }

    Binary(n/2);
    std::cout << n%2;

}
int main()
{
    long testcases;
    std::cin >> testcases;

    while(testcases--)
    {
        long n ;
        std::cin >> n;
        Binary(n);
        std::cout << std::endl;

    }
}