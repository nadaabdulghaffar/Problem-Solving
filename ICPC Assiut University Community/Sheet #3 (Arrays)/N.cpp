#include <iostream>
#include <vector>

bool checkSymbol(const std::vector<char>& v, long position) {
    return v[position] == '-';
}

bool checkInt(const std::vector<char>& v, long position) {
    for (long i = 0; i < v.size(); i++) {
        if (i == position) {
            continue;
        }
        if (!isdigit(v[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    long a, b;
    std::cin >> a >> b;
    std::vector<char> v(a + b + 1);

    for (long i = 0; i < a + b + 1; i++) {
        std::cin >> v[i];
    }

    if (checkSymbol(v, a) && checkInt(v, a)) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}
