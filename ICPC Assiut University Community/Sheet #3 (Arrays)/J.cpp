#include <iostream>
#include <vector>

int findLowest(const std::vector<int>& numbers)
{
    int lowest = numbers[0];
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < lowest)
            lowest = numbers[i];
    }
    return lowest;

}

int occurrence(int number,const std::vector<int>& numbers)
{
    int count = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == number)
            count++;
    }
    return count;

}
int main()
{
    int size;
    std::vector<int> numbers;

    std::cin >> size;
    numbers.resize(size);
    for(int i = 0; i < size; i++)
    {
        std::cin >> numbers[i];
    }

    int lowest = findLowest(numbers);

    if(occurrence(lowest,numbers) % 2 != 0)
        std::cout << "Lucky" << std::endl;
    else 
        std::cout << "Unlucky" << std::endl;


}