#include <iostream>
#include <string>


std::string wholeKeyboard[3]= {"qwertyuiop[]" , "asdfghjkl;'" , "zxcvbnm,./"};

char findRigthLetter(char movement, std::string line, int wrongIndex)
{
    if (movement == 'R')
        return line[wrongIndex - 1];

    else
        return line[wrongIndex + 1];


}
char findLetter(char character, char movement)
{

    for (int i = 0; i < 3 ; i++)
        {

            for (int j = 0; j < wholeKeyboard[i].length(); j++)
            {
                if(character == wholeKeyboard[i][j])
                    return findRigthLetter(movement, wholeKeyboard[i], j);
            }
        }
}
int main()
{
    char movement;
    std::string moleMessage;

    std::cin >> movement >> moleMessage;
    
    std::string RigthString;

    for(char c : moleMessage)
    {
        RigthString += findLetter(c, movement);
    }
    std::cout << RigthString;

    return 0;
}