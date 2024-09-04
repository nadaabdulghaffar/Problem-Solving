/**
 * You are given the string that denotes the user name, determine the gender of this user by his method.
 * if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female.
 * 
 * Input: lowercase English letters
 * Output: "CHAT WITH HER!" or "IGNORE HIM!" according to the description above
 * 
 */


/**
 * Solution 1:
 * 
 * Description: 
 * We use the STL vector to store the distinct characters in the user name.
 * If the number of distinct characters in the user name is odd, then the user is a male, otherwise she is a female.
 *
 * Time Complexity: O(n^2)
 *     As we iterate through the entire string, and throught the entire vector.
 * Space Complexity: O(n)
 *     As size of the vector is n, and n is the number of distinct characters in the user name.
 * 
 */
#include <iostream>
#include <string>
#include<vector>

int main()
{
    std::string str;
    std::cin >> str;
    std::vector <char> vec;

    for (char c: str)
    {
        bool isdistinct = true;
        for (char v: vec)
        {
            if (c == v)
            {
                isdistinct = false;
                break;
            }
        }
        if (isdistinct)
            vec.push_back(c);
    }

    if (vec.size() % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" <<std::endl;
    }
    }
/**
 * Solution 2:
 *
 * Description:
 * We use the STL unordered_set to store the distinct characters in the user name.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * 
 */
#include <iostream>
#include <string>
#include <unordered_set>



int main()
{
    std::string str;
    std::cin >> str;
    std::unordered_set <char> distinct_chars;
    for (char c : str) {
        distinct_chars.insert(c);
    }

    if (distinct_chars.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
}

/**
 * Solution 3:
 * 
 * Description: 
 * We use the STL set to store the distinct characters in the user name.
 * 
 * The [std::set] in C++ is typically implemented as a balanced binary search tree.
 * The time complexity for inserting an element into a std::set is O(logn).
 * std::set<char>(userName.begin(), userName.end()) loops through the entire string and inserts each character into the set. = O(n)
 * 
 * Time Complexity: O(n log n)
 * Space compexity: O(n)
 */
#include <iostream>
#include <string>
#include <set>

int main()
{
    std::string str;
    std::cin >> str;

    std::set <char> distinct_chars(str.begin(), str.end());

    if (distinct_chars.size() % 2 == 0)
        std::cout << "CHAT WITH HER!" << std::endl;

    else
        std::cout << "IGNORE HIM!" <<std::endl;


    
}