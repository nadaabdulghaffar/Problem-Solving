#include <iostream>
#include <vector>

int main()
{
    int testcases;
    std::cin >> testcases;

    while (testcases--)
    {
        int size;
        std::cin >> size;

        std::vector<int> array(size);

        for (int i = 0; i < size; i++)
        {
            std::cin >> array[i];
        }
        int subArray_Count = 0;

        for (int i = 0; i < size; i++)
        {
            subArray_Count++;
            for (int j = i + 1; j < size; j++)
            {
                if (array[j - 1] <= array[j])
                    subArray_Count++;

                else
                    break;
            }
        }
        std::cout << subArray_Count << std::endl;
    }
}
