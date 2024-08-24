#include <iostream>
/**
 * Input: Lowercase English letters
 * Output: Next letter in the alphabet
 */

int main()
{
    char letter;
    std::cin >> letter;

    if(letter == 'z')
    {
        std::cout << "a";
    }
    else
    {
        letter++;
        std::cout << letter;
    }
}