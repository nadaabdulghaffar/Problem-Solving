#include<iostream>
#include<string>
bool isVowel(char c)
{
    c = tolower(c); // Convert to lowercase for uniformity
    return (c == 'a' || c == 'e' || c =='i'|| c == 'u' || c == 'o');
}
int countVowels(std::string& inputString, int currentLetter)
{
    if(currentLetter == inputString.length())
        return 0;

    return isVowel(inputString[currentLetter]) + countVowels(inputString, currentLetter + 1);

}

int main()
{
    std::string inputString;
    std::getline(std::cin, inputString);
    
    std::cout << countVowels(inputString,0) ;
}