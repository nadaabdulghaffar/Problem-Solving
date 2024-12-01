#include <iostream>
#include <algorithm>

int main()
{

    int number;
    std::cin >> number ;
    
    int matrix[number][number];

    for(int i = 0; i < number; i++)
    {
        for(int j = 0; j < number; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    int sumDiagonal1 = 0;
    int sumDiagonal2 = 0;

    for(int i = 0; i < number; i++)
    {
        sumDiagonal1 += matrix[i][i];
        sumDiagonal2 += matrix[i][number - i - 1];
    }

    std::cout << std::abs(sumDiagonal1 - sumDiagonal2);

    return 0;
}
