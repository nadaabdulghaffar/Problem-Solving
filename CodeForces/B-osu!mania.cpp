#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>


int main() {
    int numTestCases;
    std::cin >> numTestCases;

    while (numTestCases-- > 0) {
        int numRows;
        std::cin >> numRows;

        std::vector<int> reversedColumns;

        while (numRows-- > 0) {
            std::string row;
            std::cin >> row;

            int columnIndex = -1;
            for (int i = 0; i < 4; ++i) {
                if (row[i] == '#') {
                    columnIndex = i + 1;
                    break;
                }
            }

            if (columnIndex != -1) {
                reversedColumns.push_back(columnIndex);
            }
        }

        std::reverse(reversedColumns.begin(), reversedColumns.end());

        for (int columnIndex : reversedColumns) {
            std::cout << columnIndex << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
