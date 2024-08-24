#include <iostream>

void printnumbers(int n)
{
    if (n == 0)
        return ;

    else
        printnumbers(n-1) ;
    std::cout << n << std::endl;
}  
int main()
{
    int n;
    std::cin >> n ;
    printnumbers(n) ;
}