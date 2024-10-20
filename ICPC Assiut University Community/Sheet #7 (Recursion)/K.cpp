#include <iostream>
#include <vector>
#include <algorithm>

int maxNumber(std::vector<int>& numbers, int index)
{
    if(index == numbers.size())
        return -1e9; // Set to a very small number like -1e9 to handle negative number
    return std::max(numbers[index], maxNumber(numbers, index+1));
}

int main()
{
    int size;
    std::cin >> size;
    std::vector<int> numbers(size);

    for(int& n : numbers)
    {
        std::cin >> n;
    }
    std::cout << maxNumber(numbers, 0);
}