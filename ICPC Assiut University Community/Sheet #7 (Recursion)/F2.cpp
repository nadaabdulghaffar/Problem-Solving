#include <iostream>
#include <vector>
void printEvenIndices(const std::vector<int>& values, int index)
{
    if (index < 0) {
        return;
    }

    if (index % 2 == 0) {
        std::cout << values[index] << " ";
    }

    printEvenIndices(values, index - 1);
}


int main()
{
    int size;
    std::cin >> size;

    std::vector<int> numbers(size);

    for (int& number : numbers)
    {
        std::cin >> number;
    }

    printEvenIndices(numbers, size - 1);

    return 0;
}
