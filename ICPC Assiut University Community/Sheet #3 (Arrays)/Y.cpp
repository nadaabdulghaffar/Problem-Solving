// #include <iostream>
// #include <vector>
// #include <numeric>

// int main() {
// /**
//  * Given 2 numbers N and Q , an array A of N number and Q number of pairs L , R
//  * For each query Q print the summation of all numbers from L to R
//  *
//  * Input:First line contains a number N of digits annd q, second line contains a number.
//  *       second line contains a number.
//  *       Third line contains a pairs l , r
//  * 
//  * Output:For each query Q print the summation of all numbers from l to R
//  */

//     int n,q;
//     long l,r;
//     std::cin >> n >> q;
//     std::vector<long> v(n);

//     for(int i = 0; i < n; i++)
//     {
//         std::cin>> v[i];
//     }

//     while(q--)
//     {
//         std::cin >> l >> r;
//         std::cout << std::accumulate(v.begin() + l - 1, v.begin() + r, 0) << '\n';
//     }

//     return 0;
// }
