#include <iostream>
#include <vector>
/**
 * Print all lucky numbers between A and B inclusive.
 * A Lucky number is any positive number that its decimal representation contains only 4 and 7
 *
 * Input : A and B
 * Output : All lucky numbers between A and B inclusive, If there is no lucky number print -1.
 */
bool isLucky(int number)
{
    while(number)
    {
        int digit = number %10;
        if (digit != 7 && digit != 4)
            return false;
        number /= 10;
    }
    return true;
}
int main()
{
    long a,b;
    static int flag = 1;
    std::vector <long> v;
    std:: cin >> a >> b;

    for (long i = a; i <=b;i++)
    {   if (isLucky(i))
            v.push_back(i);
    }
    if (v.empty())
        std::cout << -1;
    else 
        for (long i = 0; i < v.size(); i++)
            std::cout << v[i] << " ";
    return 0;
}
