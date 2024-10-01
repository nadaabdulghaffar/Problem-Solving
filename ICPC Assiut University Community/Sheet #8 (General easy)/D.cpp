#include <iostream>

int main()
{
    int Limak_weight, bob_weight;
    std::cin >> Limak_weight >> bob_weight;

    int years_count = 0;

    while (Limak_weight <= bob_weight)
    {
        Limak_weight *= 3;
        bob_weight *=  2;

        ++years_count;
    }

    std::cout << years_count << std::endl;
}