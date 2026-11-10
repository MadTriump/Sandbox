#include <iostream>

void swap_ptr(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void sort3(int* a, int* b, int* c) {
    if (*a > *b) swap_ptr(a, b);
    if (*a > *c) swap_ptr(a, c);
    if (*b > *c) swap_ptr(b, c);
}

int main() {
    int x = 3, y = 1, z = 2;
    sort3(&x, &y, &z);
    std::cout << x << ' ' << y << ' ' << z << '\n';
}