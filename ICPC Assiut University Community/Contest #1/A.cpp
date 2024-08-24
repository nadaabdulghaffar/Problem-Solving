#include <iostream>
#include <iomanip>

int main ()
{
    int discount;
    long price;
    double originalPrice;     
    std::cin >> discount >> price;
    originalPrice = price/(1 - discount/100.00);
    std::cout << std::fixed << std::setprecision(2) << originalPrice << std::endl;
}   