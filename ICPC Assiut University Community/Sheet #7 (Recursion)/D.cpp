#include <iostream>

void printSeprated(int n)
{
    if(n % 10 == n)
    {
        std::cout << n << " ";
        return;
    }
    long lastDigit = n % 10;
    long firstDigit = n / 10;
    printSeprated(firstDigit);
    printSeprated(lastDigit);
}


int main ()
{
    int testcases ; 
    std::cin >> testcases;

    while(testcases--)
    {
        long n;
        std::cin >> n;
        printSeprated(n);

        std::cout << std::endl;

    }

}