#include <iostream>

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i % 2 != 0)
                std::cout << "#";
            else
            {
                if (j == 1 && i % 4 == 0)
                    std::cout << "#";
                
                else if (j == columns && i % 2 == 0 && i % 4 != 0)
                    std::cout << "#";
            
                else
                    std::cout << ".";
            } 
        }
        std::cout << std::endl;
    }
}