#include <iostream>
#include <vector>

int main()
{
    int size;
    std::vector<long> array;

    std::cin >> size;
    array.resize(size);

    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    long indexSmallest = 0;
    long smallest = array[0];

    long indexLargest = 0;
    long largest = array[0];


    for (long i = 1; i < size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            indexSmallest = i;
        }
        if (array[i] > largest)
        {
            largest = array[i];
            indexLargest = i;
        }
    }
    std::swap(array[indexSmallest], array[indexLargest]);


    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] <<" ";
    }
    std::cout << std::endl;
    return 0;

}
