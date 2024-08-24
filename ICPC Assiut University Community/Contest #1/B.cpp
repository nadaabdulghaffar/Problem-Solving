#include <iostream>
int main()
{
    long long a , b, k;
    std:: cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0)
        std::cout << "Both" << std::endl;
    else if (a % k == 0)
        std::cout << "Memo" << std:: endl;
    else if (b % k == 0)
        std::cout << "Momo" << std::endl;
    else
        std::cout << "No One" << std::endl;
}