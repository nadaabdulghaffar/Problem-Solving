#include <iostream>

int main ()
{
    int room_number;
    std::cin >> room_number;
    
    int room_for_Both = 0;
    while (room_number--)
    {
        int people_in_room;
        int people_fit = 0;

        std::cin >> people_in_room >> people_fit;
        if (people_fit - people_in_room >= 2)
            room_for_Both++;
    }
    std::cout << room_for_Both << std::endl;
    return 0;
}