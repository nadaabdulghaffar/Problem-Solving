#include <iostream>
#include <cmath>

int main()
{
    long long number; 
    std::cin >> number;

   long long power = log2(number);
   if (std::pow(2,power) == number)
        std::cout << "YES";
    else 
        std::cout << "NO";
}

// Solution #2
/**
 * Solve with binary representation , AND bitwise operator
 */
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    
    if (N > 0 && (N & (N - 1)) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
