#include <cstdint>
#include <iostream>

std::uint32_t pack(int r, int g, int b) {
    return ((std::uint32_t)(r & 0xFF) << 16)
         | ((std::uint32_t)(g & 0xFF) << 8)
         |  (std::uint32_t)(b & 0xFF);
}

int main() {
    std::cout << std::hex << pack(255, 136, 0) << ' ' << pack(0, 128, 255) << '\n';
}
