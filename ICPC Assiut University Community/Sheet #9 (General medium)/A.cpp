#include <iostream>
#include <vector>


int main()
{
    int rows, columns, lines;
    std::cin >> rows >> columns >> lines;
    

    while(lines--)
    {
    int r1 , r2 , c1 , c2;
    char character;
    std::cin >> r1 >> c1 >> r2 >> c2 >> character;

                for (int row = r1-1; row < r2-1; row++)
                {
                    for (int column = c1-1 ; column < c2-1; column++)
                    {
                        std::cout << character;
                    }
                    std::cout << std::endl;
                }
    }
    return 0;
}