#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(const std::vector<int>& numbers)
    {
        int right = numbers.size() - 1;
        int left = 0;
        int maxArea = 0;

        while(right > left)
        {
            int height = std::min(numbers[right], numbers[left]);
            int currentArea = height * (right - left);
            maxArea = std::max(currentArea, maxArea);   

            if (numbers[right] > numbers[left])
                left++;
            else 
                right--;
        }
        return maxArea;
    }
};
