/**
 * Input: Only one line containing one odd number N (3≤N≤49)
 * Output:N×N square as shown in the sample
 *      If 𝑖 = = 𝑗 i==j and 𝑖 = = 𝑁 / 2 i==N/2 (center), it prints X.
 *      If 𝑖 = = 𝑗 i==j, it prints a backslash \
 *      If 𝑖 + 𝑗 = = 𝑁 − 1 i+j==N−1, it prints a forward slash /
 *      If none of the above conditions are met, it prints an asterisk *.
 */

#include<iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
           if (i == j && i == n / 2)
                std::cout << "X";

            else if (i == j)
                std::cout<< "\\"; 

            else if (i + j+ 1 == n)
                std::cout << "/";

            else 
                std::cout << "*";
        }
        std::cout << std::endl;
    }
}