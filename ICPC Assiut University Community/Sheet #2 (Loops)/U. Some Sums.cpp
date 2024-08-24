#include <iostream>
#include <vector>
/**
 * Print the summation of the numbers between 1 and N whose sum of digits is between A and B inclusive
 * Input: Only one line containing three numbers N, A, B 
 */
bool sumEqual(long num,int a,int b)
{
    int total =0;
    while (num)
    {
        int digit = num % 10;
        total += digit;
        num /= 10;
    }
    return ( a <= total  && total <= b);
}
int main(){
    long N;
    int A,B;
    int result = 0;
    std::cin >> N >> A >> B;

    for (long i = 1; i <= N; i++)
    {
        if(sumEqual(i, A, B))
            result += i;
    }
    std:: cout << result;
}