#include <iostream>
#include <string>
// Time Complexity : O(n) where n for input Characters

std::string wholeKeyboard[3] = {"qwertyuiop[]", "asdfghjkl;'", "zxcvbnm,./"};

/**
 * Finds the correct neighboring letter based on the shift direction.
 * @param shiftDirection - The direction the hands were shifted ('L' or 'R')
 * @param line - The line of the keyboard where the character resides
 * @param currentIndex - The index of the mistyped character in the row
 * @return The original correct character
 */

char findCorrectLetter(char shiftDirection, std::string line, int currentIndex)
{
    // if the shift Direction right move the index to the left by 1 
    if (shiftDirection == 'R')
        return line[currentIndex - 1];

    // if the shift Direction left move the index to the right by 1 
    else
        return line[currentIndex + 1];
}

/**
 * Find the line that the character exist to find the correct letter
 * @param character - input message characters
 * @param shiftDirection - The direction the hands were shifted ('L' or 'R')
 * @return - Correct Letter
 */
char findLetter(char character, char shiftDirection)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < wholeKeyboard[i].length(); j++)
        {
            if (character == wholeKeyboard[i][j])
                return findCorrectLetter(shiftDirection, wholeKeyboard[i], j);
        }
    }
}
int main()
{
    char shiftDirection;
    std::string moleMessage;

    std::cin >> shiftDirection >> moleMessage;

    std::string RigthString;

    for (char c : moleMessage)
    {
        RigthString += findLetter(c, shiftDirection);
    }
    std::cout << RigthString;

    return 0;
}