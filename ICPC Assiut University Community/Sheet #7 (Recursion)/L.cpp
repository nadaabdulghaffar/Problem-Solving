#include<iostream>
#include <vector>

long long summation(std::vector<int>& numbers, int currentIndex)
{
    if (currentIndex == numbers.size())
        return 0;
    return numbers[currentIndex] + summation(numbers, currentIndex + 1);
}
int main()
{
    int size;
    std::cin >> size;

    std::vector<int> numbers(size);
    for(int& n : numbers)
        std::cin >> n;

    std::cout << summation(numbers,0);
    return 0;
}