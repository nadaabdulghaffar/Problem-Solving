#include <iostream>
#include <vector>

long long sumffix(const std::vector<long long>& A, int M, int index) {
    // Base case: when M becomes 0, stop the recursion
    if (M == 0) {
        return 0;
    }
    // Recursive case: sum the current element and the remaining M-1 elements
    return A[index] + sumffix(A, M - 1, index - 1);
}
int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector <long long> numbers(n);

    for(long long& n : numbers)
        std::cin >> n;
    
    std::cout << sumffix(numbers, m, n - 1);
}