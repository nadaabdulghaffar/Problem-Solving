#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> generateMaxOfSubarrays(const std::vector<int>& original) {
    std::vector<int> maxValues;
    int n = original.size();

    // Loop to generate all subarrays
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            // Find the maximum value in the subarray original[start...end]
            int maxVal = *std::max_element(original.begin() + start, original.begin() + end + 1);
            maxValues.push_back(maxVal);
        }
    }

    return maxValues;
}

int main() {
    int testCases;
    std::cin >> testCases;

    while (testCases--) {
        int size;
        std::cin >> size;

        std::vector<int> array(size);
        for (int i = 0; i < size; ++i) {
            std::cin >> array[i];
        }

        std::vector<int> result = generateMaxOfSubarrays(array);
        
        // Print the result for the current test case
        for (const int& value : result) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
