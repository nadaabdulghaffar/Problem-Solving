#include <iostream>

/**
 * Prints a pyramid of asterisks.
 * @param currentLine the current line of the pyramid being printed.
 * @param targetLine the target line of the pyramid being printed.
 */
void printPyramid(int currentLine, int targetLine)
{
    // Base case: exit if the current line is greater than the target line
    if(currentLine > targetLine)
    {
        return;
    }

    // Print the leading spaces
    for(int spaces = 0; spaces < targetLine - currentLine; spaces++)
    {
        std::cout << " ";
    }

    // Print the asterisks
    for(int stars = 0; stars < (currentLine * 2) - 1; stars++)
    {
        std::cout << "*";
    }

    // Print a newline
    std::cout << "\n";

    // Recursively call the function to print the next line
    printPyramid(currentLine + 1, targetLine);

}
int main()
{
    int lines;
    std::cin >> lines;

    printPyramid(1, lines);
    
    return 0; 
}