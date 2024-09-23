#include <iostream>
#include <vector>

bool allEven(const std::vector<int> &vect)
{
    for (int i : vect)
    {
        if (i % 2 != 0)
            return false;
    }
    return true;
}

int main()
{
    int size;
    std::cin >> size;

    std::vector<int> values(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> values[i];
    }

    int divisions = 0;
    while (allEven(values)) {
        for (int& value : values) {
            value /= 2;
        }
        ++divisions;
    }

    std::cout << divisions << std::endl;
    return 0;
}
