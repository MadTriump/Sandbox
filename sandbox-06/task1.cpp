#include <iostream>

struct PacketOriginal {
    char   type;
    double value;
    char   flags;
};

// Переставлено: від найбільших полів до найменших
struct PacketTight {
    double value;
    int    id;
    char   type;
    char   flags;
};

int main() {
    std::cout << sizeof(PacketOriginal) << ' ' << sizeof(PacketTight) << '\n';
}
