#include <iostream>
#include <vector>
#include <string>
#include<algorithm>

int main()
{
    int MagnetsNumber;
    std::cin >> MagnetsNumber;

    std::vector<std::string> Magnets(MagnetsNumber);

    for (int i = 0; i < MagnetsNumber; i++)
    {
        std::cin >> Magnets[i];
    }


    int MagnetGroups = 1;
    for (int i = 1; i < MagnetsNumber; i++)
    {
        if (Magnets[i - 1] != (Magnets[i]))
            MagnetGroups++;
    }
    std::cout << MagnetGroups;
    return 0;
}