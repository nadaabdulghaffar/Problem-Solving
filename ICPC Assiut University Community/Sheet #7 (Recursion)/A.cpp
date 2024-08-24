#include <iostream>

void iloveRecursion(int n)
{
    if(n == 0)
        return;
    iloveRecursion(n - 1);
    std::cout << "I love Recursion\n";
}
int main()
{
    int n;
    std::cin >> n;

    iloveRecursion(n);
}