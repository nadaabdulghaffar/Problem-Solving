#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    
    while (T--) {
        unsigned int N;
        cin >> N; // Read the input number
        
        // Convert N to binary and count the number of 1s
        int count = bitset<32>(N).count();
        
        // Generate a number that has 'count' number of 1s in its binary representation
        unsigned int result = (1 << count) - 1;
        
        // Output the result
        cout << result << endl;
    }
    
    return 0;
}
