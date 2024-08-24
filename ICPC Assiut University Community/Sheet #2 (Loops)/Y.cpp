#include <iostream>
/**
 * Given a number N. Print first N numbers of the Fibonacci sequence. (1 ≤ N ≤ 45).
 *
 * Use the following function:
 * fib(1) = 0.
 * fib(2) = 1.
 * fib(n) = fib(n - 1) + fib(n - 2).
 *
 * Complexity:
 *      Time: O(N).
 *      Space: O(1). 
 */

int main()
{
    int n;
    std::cin >> n;

    long long perv = 0;
    long long current = 0;
    long long temp = 0;
    for (int i = 1; i <= n; i++)
    {
        temp = current;
        if (i == 2)
        {
            current = 1;
        }
        current += perv;
        perv = temp;
        std::cout << current << " ";

    }
}

