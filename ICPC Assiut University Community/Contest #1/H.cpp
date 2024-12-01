// #include <iostream>
// #include <limits>

// int main()
// {
//     int n, k, a;
//     unsigned long long result;

//     std::cin >> n >> k >> a;

//     result = static_cast<unsigned long long> (n) * k / a;

//     if (result <= std::numeric_limits<int>::max()) {
//         std::cout << "int" << std::endl;
//     } else if (result <= std::numeric_limits<long long>::max()) {
//         std::cout << "long long" << std::endl;
//     } else {
//         std::cout << "double" << std::endl;
//     }

// }