#include <iostream>
/**
 * Calculate the difference between the total sum of 1 to n; and total sum of input numbers to find the missing number
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
int main()
{
    long n;
    std::cin >> n ;

    long long TotalSum = (n * (n + 1) / 2);
    long long InputSum = 0 ;
    
    for(long i = 0; i < n - 1 ; i++)
    {   long e;
        std::cin >> e;
        InputSum += e;
    }

    std::cout << TotalSum - InputSum;

}