#include <iostream>
#include <string>

std::string createPalindrome(const std::string& inputString) {
    std::string outputString;
    const auto size = inputString.size();

    for (auto i = 0u; i < size; ++i) {
        const auto j = size - (i + 1);

        if (inputString[i] == '?' && inputString[j] == '?') {
            outputString += 'a';
        } else if (inputString[i] == '?') {
            outputString += inputString[j];
        } else if (inputString[j] == '?') {
            outputString += inputString[i];
        } else if (inputString[i] != inputString[j]) {
            return "-1";
        } else {
            outputString += inputString[i];
        }
    }

    return outputString;
}

int main() {

std::string str;
std::cin >> str;

    std::cout << createPalindrome(str) << std::endl;
    return 0;
}