#include <iostream>

long long  fib(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    long long  prev = 0, curr = 1;
    for (int i = 3; i <= n; ++i)
    {
        long long temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    return curr;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    return 0;
}
