#include <iostream>
#include <cstdint>

std::uint32_t read_le(const unsigned char* b) {
    return b[0] | (b[1] << 8) | (b[2] << 16) | (b[3] << 24);
}

std::uint32_t read_be(const unsigned char* b) {
    return (b[0] << 24) | (b[1] << 16) | (b[2] << 8) | b[3];
}

int main() {
    unsigned char bytes[4] = {0x78, 0x56, 0x34, 0x12};
    std::cout << std::hex;
    std::cout << read_le(bytes) << ' ' << read_be(bytes) << '\n'; 
}