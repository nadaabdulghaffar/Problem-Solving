#include <iostream>
#include <string>

/**
 * Input:First line contains a number N of digits., second line contains a number.
 * Output:Print the summation of the digits.
 */

int main()
{
    int N;
    std::cin >> N;

    std::string number;
    std::cin >> number;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += number[i] - '0'; // Convert character to integer
    }
    std::cout << sum << std::endl;

    return 0;
}
