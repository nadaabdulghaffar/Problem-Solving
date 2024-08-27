#include <iostream>
#include <bitset>
#include <cmath>

// Solution 1

int main() {
    int T;
    std::cin >> T;
    
    while (T--) {
        unsigned int N;
       std::cin >> N;
        
        // Convert N to binary and count the number of 1s
        int count = std::bitset<32>(N).count();
        
        // Generate a number that has 'count' number of 1s in its binary representation
        unsigned int result = (1 << count) - 1;
        
        // Output the result
        std::cout << result << std::endl;
    }
    
    return 0;
}

// -------------------------------------------------------------------------------------
// Solution 2
    int CountOnes(int n)
    {
        int count = 0;
        while (n > 0)
        {
            count +=  n%2;
            n /= 2;
        }
        return count;
        
    }


    int main()
    {

        int t;
        std::cin >> t;

        while(t--)
        {
            int n;
            std::cin >> n;

            int count = CountOnes(n);
        

                int result = (1 << count) - 1;

            std::cout << result << std::endl;
        }



        return 0;
    }



