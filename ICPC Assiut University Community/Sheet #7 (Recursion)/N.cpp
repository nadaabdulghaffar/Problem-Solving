#include <iostream>
const int MAX = 100;


void printMatrixSum(int matrixA[MAX][MAX], int matrixB[MAX][MAX],
                int rows, int columns, int currentRow, int currentColumn)
{
    //Base Case: End of Matrix
    if (currentRow == rows)
        return;

    std::cout << matrixA[currentRow][currentColumn] + matrixB[currentRow][currentColumn] << " ";

    // Move to next Row if reach end of columns
    if (currentColumn + 1 == columns)
    {
        std::cout << "\n";
        printMatrixSum(matrixA, matrixB, rows, columns,currentRow + 1, 0);
    }
    // else continue in the same row
    else 
    {
        printMatrixSum(matrixA, matrixB, rows, columns, currentRow, currentColumn + 1);
    }
}

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;

    int matrixA[MAX][MAX], matrixB[MAX][MAX];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> matrixA[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> matrixB[i][j];
        }
    }
    printMatrixSum(matrixA, matrixB, rows, columns , 0, 0);
    return 0;
}