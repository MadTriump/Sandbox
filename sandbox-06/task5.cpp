#include <iostream>

struct Point { int x, y; };

int main() {
    Point* p = new Point[3];
    for (int i = 0; i < 3; ++i) {
        p[i].x = i + 1;
        p[i].y = 0;
    }

    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += p[i].x;
    }
    std::cout << sum << '\n';

    delete[] p;
    p = nullptr;
}
