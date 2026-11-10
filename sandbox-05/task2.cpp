#include <cstdint>
#include <iostream>

std::uint8_t mirror(std::uint8_t b) {
    std::uint8_t result = 0;
    for (int i = 0; i < 8; ++i) {
        std::uint8_t bit = (b >> i) & 1;
        result = (std::uint8_t)((result << 1) | bit);
    }
    return result;
}

int main() {
    std::cout << std::hex
              << (int)mirror(0x01) << ' '
              << (int)mirror(0xA0) << ' '
              << (int)mirror(0x3C) << '\n';
}
