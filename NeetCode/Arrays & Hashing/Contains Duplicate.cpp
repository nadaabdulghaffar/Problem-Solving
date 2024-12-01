#include <iostream>
#include <vector>

/**
 * Time Complexity O(n ^ 2)
 * Using Brute Force approach
 */
class Solution
{
public:
    bool hasDuplicate(std::vector<int> &inputArray)
    {
        for (int i = 0; i < inputArray.size(); i++)
        {
            for (int j = i + 1; j < inputArray.size(); j++)
            {
                if (inputArray[i] == inputArray[j])
                    return true;    
            }
        }
        return false;
    }
};
