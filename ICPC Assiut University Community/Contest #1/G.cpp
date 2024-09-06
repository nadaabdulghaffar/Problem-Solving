#include <iostream>
#include <algorithm>

int main() {
    long long eye, mouth, body;
    std::cin >> eye >> mouth >> body;

    // Check if any key components (eyes or bodies) are zero
    if (eye == 0 || body == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    // If there are no mouths, we can only make Katryoshkas with 2 eyes and 1 body
    if (mouth == 0) {
        std::cout << std::min(eye / 2, body) << std::endl;
        return 0;
    }

    // We need at least 1 eye, 1 mouth, and 1 body for each Katryoshka
    long long katryoshkas_by_minimum = std::min({eye, mouth, body});

    // Now reduce the counts
    eye -= katryoshkas_by_minimum;
    mouth -= katryoshkas_by_minimum;
    body -= katryoshkas_by_minimum;

    // If we have remaining eyes and bodies, we can still use the combination of 2 eyes and 1 body
    long long additional_katryoshkas = std::min(eye / 2, body);

    std::cout << katryoshkas_by_minimum + additional_katryoshkas << std::endl;
    return 0;
}
