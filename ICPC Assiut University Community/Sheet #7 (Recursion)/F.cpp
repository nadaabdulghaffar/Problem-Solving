#include <iostream>
#include <algorithm>
#include <cmath>
int main()
{
    int size;
    std::cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    int evenSize = (size + 1) / 2;
    int evenIndices[evenSize];

    for(int i = 0, j = 0; j <= evenSize; j++, i +=2)
    {
        evenIndices[j] = array[i];
    }
    std::reverse(evenIndices, evenIndices+evenSize);
    for(int i = 0; i < evenSize; i++)
    {
        std::cout << evenIndices[i] << " ";
    }
}