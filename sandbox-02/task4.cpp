#include <iostream>

bool bit_is_set(int value, int n) {
    return (value & (1 << n)) != 0;
}

int main() {
    for (int n = 0; n < 3; ++n) {
        if (n > 0) std::cout << ' ';
        std::cout << bit_is_set(6, n);
    }
    std::cout << '\n';
}
