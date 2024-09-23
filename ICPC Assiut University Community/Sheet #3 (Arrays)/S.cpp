#include <iostream>
#include <vector>

bool isExist(const std::vector<int>& vect, int number)
{
    for (int i : vect)
    {
        if (i == number)
            return true;
    }
    return false;
}

int main()
{
    int rows, columns;
    int inputNumber;
    std::cin >> rows >> columns;

    std::vector<int> vect(rows*columns);

    for (int& number : vect)
    {
        std::cin >> number;
    }
    std::cin>> inputNumber;

    if (isExist(vect, inputNumber))
        std::cout << "will not take number" << std::endl;
    else
        std::cout << "will take number" << std::endl;
    
}


/////////////////////////////////////////////////////
// Solution 2
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int rows, columns, inputNumber;
    std::cin >> rows >> columns;

    std::vector<int> numbers(rows * columns);

    for (int& number : numbers)
    {
        std::cin >> number;
    }

    std::cin >> inputNumber;

    if (std::find(numbers.begin(), numbers.end(), inputNumber) != numbers.end())
    {
        std::cout << "will not take number" << std::endl;
        std::cout << *std::find(numbers.begin(), numbers.end(), inputNumber) ;
    }
    else
    {
        std::cout << "will take number" << std::endl;
    }
}
