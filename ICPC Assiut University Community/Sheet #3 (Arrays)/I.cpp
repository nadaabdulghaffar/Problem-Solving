#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>  // For INT_MAX

int getResult(int number1, int number2, int position1, int position2)
{
    return number1 + number2 + position2 - position1;
}

int main()
{
    int testcases;
    std::cin >> testcases;

    while(testcases--)
    {
        int n;
        std::cin >> n;

        std::vector<int> vect(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> vect[i];
        }

        int smallest = INT_MAX;  // Set initial value to a large number

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int currentResult = getResult(vect[i], vect[j], i + 1, j + 1);
                if (currentResult < smallest)
                {
                    smallest = currentResult;
                }
            }
        }

        std::cout << smallest << std::endl;
    }

    return 0;
}
