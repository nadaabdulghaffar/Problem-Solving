#include <iostream>

int main()
{
    int OrangeNumber, MaxSize, WestSection;
    std::cin >> OrangeNumber >> MaxSize >> WestSection;

    int OrangeSize;
    int WestConter = 0;
    int TotalAmount = 0;
    for (int i = 0; i < OrangeNumber; i++)
    {
        std::cin >> OrangeSize;
        if (OrangeSize <= MaxSize)
        {
            TotalAmount += OrangeSize;
            if(TotalAmount > WestSection)
            {
                WestConter++;
                TotalAmount = 0;
            }
        }
    }
    std::cout << WestConter;
}