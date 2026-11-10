#include <iostream>
#include <cstdint>
#include <cstring>

void print_float_parts(float f) {
    std::uint32_t bits = 0;
    std::memcpy(&bits, &f, sizeof(bits));
    std::uint32_t sign = (bits >> 31) & 1;
    std::uint32_t exponent = (bits >> 23) & 0xFF;
    std::cout << sign << ' ' << exponent << '\n';
}

int main() {
    print_float_parts(-2.5f);
    print_float_parts(1.0f);
}
