#include <iostream>

void printnumbers (int n)
{
    if (n == 0)
        return;
    std::cout << n ;
    if (n != 1)
        std::cout << " ";
    printnumbers (n - 1);
}
int main ()
{
    int n;
    std::cin >> n;
    printnumbers (n);   
    return 0;
}