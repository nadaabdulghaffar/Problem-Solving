#include <iostream>
#include <string>

std::string weridAddition(std::string str1, std::string str2)
{
    std::string newString;
    int lowestString = std::min(str1.length(), str2.length());

    for(int i = 0; i < lowestString; i++)
    {
        newString += str1[i];
        newString += str2[i];
    }

    if (str1.length() > str2.length())
        newString += str1.substr(lowestString);
    else 
        newString += str2.substr(lowestString);

    return newString;
}
int main()
{
    int testCases;
    std::cin >> testCases;

    while(testCases--)
    {
        std::string str1, str2;
        std::cin >> str1 >> str2;
        std::cout << weridAddition(str1, str2) <<"\n";
    }
    return 0;
}