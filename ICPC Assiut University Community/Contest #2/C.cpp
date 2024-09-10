#include <iostream>
#include <vector>

std::vector<int> findMins(std::vector<int>& vect, int range)
{
    std::vector<int> mins;
    for(int i = 0; i < vect.size(); i += range)
    {
        int min = vect[i];  // Initialize min to the first element in the range
        for (int j = i; j < i + range && j < vect.size(); j++)
        {
            if (min > vect[j])
                min = vect[j];
        }
        mins.push_back(min);
    }
    return mins;
}

int main() {
    int n, range;
    std::cin >> n >> range;
    std::vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    std::vector<int> mins = findMins(vec, range);

    for (int i = 0; i < mins.size(); i++)
    {
        std::cout << mins[i] << " ";
    }

    return 0;
}
