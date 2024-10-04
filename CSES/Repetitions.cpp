#include <iostream>
#include <string>
int main()
{
    std::string InputString;
    std::cin >> InputString;

    int currentSubstring = 1;
    int maxSubstring = 1;

    for(int i = 0; i< InputString.length(); i++)
    {
        if(InputString[i] == InputString[i + 1])
            currentSubstring++;
        else
        {
            maxSubstring = std::max(maxSubstring, currentSubstring);
            currentSubstring = 1;
        }
    }
    std::cout << maxSubstring;
}