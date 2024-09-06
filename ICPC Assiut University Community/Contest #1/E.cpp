#include <iostream>


/**
 * Given two numbers a and b .You have to answer with "YES" if there is a non-empty interval consisting of 
 * numbers from l to r (l,l+1,l+2,...,r ) with a odd numbers and b even numbers, or "NO" otherwise.
 * 
 * Input: two numbers a and b
 * Output: "YES" or "NO"
 * 
 * Solution keys:
 * Every interval of integers contains alternating odd and even numbers, i.e., even, odd, even, odd, etc.
 * If the interval contains a odd numbers, it must also contain a even numbers, since odd and even numbers alternate.
 * In other words, for an interval to satisfy both a odd numbers and b even numbers,
 *                the conditions must be: 𝑏 = 𝑎 or 𝑏 = 𝑎 + 1. 
 */

int main()
{
    int a , b;
    std::cin  >> a >> b;
    
    int total =  a + b;

    if (total >0 && ( a+1 == b || b+1 == a || a == b ))
    {
        std::cout<< "YES" <<std::endl;
    }

    else 
        std::cout << "NO" << std::endl;

    return 0;
}

