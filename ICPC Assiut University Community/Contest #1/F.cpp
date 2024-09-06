#include <iostream>
int main() {
    int num1, num2;
    int total;

    std::cin>> num1 >> num2;
    total = num1 ^ num2 ;
    
    std::cout << total;

    return 0;
}