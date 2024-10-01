#include <iostream>

int main ()
{
    int a ,b ;
    std::cin >> a >> b ;

    int arraya[a];
    int arrayb[b];

    for (int i = 0; i < a; i++)
    {
        std::cin >> arraya[i];
    }

    for (int i = 0; i < b; i++)
    {
        std::cin >> arrayb[i];
    }

    int sumA = 0, sumB = 0;
    for (int e : arraya)
    {
        sumA += e;
    }

    for (int e : arrayb)
    {
        sumB +=e;
    }

    if (sumA == sumB)
        std::cout << "Yes"<< std::endl;
    else  
        std::cout << "No" << std::endl;
    return 0;
}