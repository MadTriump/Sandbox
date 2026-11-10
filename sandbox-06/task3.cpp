#include <iostream>

struct Vec { int x, y; };

Vec add(Vec a, Vec b) {
    return Vec{a.x + b.x, a.y + b.y};
}

void scale(Vec* v, int k) {
    v->x *= k;       // v->x — це (*v).x
    v->y *= k;
}

int main() {
    Vec r = add({1, 2}, {3, 4});
    std::cout << r.x << ' ' << r.y << '\n';
    scale(&r, 2);
    std::cout << r.x << ' ' << r.y << '\n';
}
