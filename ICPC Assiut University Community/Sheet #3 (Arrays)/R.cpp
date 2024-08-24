#include <iostream>
#include <vector>
#include <algorithm>

bool isPermutation(const std::vector<long>& a, const std::vector<long>& b)
{
    if (a.size() != b.size())
        return false;

    std::vector<long> sorted_a = a;
    std::vector<long> sorted_b = b;

    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());

    return sorted_a == sorted_b;
}

int main()
{
    long number;
    std::cin >> number;

    std::vector<long> a(number);
    std::vector<long> b(number);

    for (long i = 0; i < number; i++)
    {
        std::cin >> a[i];
    }
    
    for (long i = 0; i < number; i++)
    {
        std::cin >> b[i];
    }

    if (isPermutation(a, b))
        std::cout << "yes";
    else
        std::cout << "no";

    return 0;
}
