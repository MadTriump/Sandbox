#include <iostream>

void swap_ptr(int* x, int* y) {
    int t = *x; *x = *y; *y = t;
}

void reverse(int* a, int n) {
    int* start = a;
    int* end = a + n - 1;
    while (start < end) {
        swap_ptr(start, end);
        start++;
        end--;
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    reverse(a, 5);
    for (int i = 0; i < 5; ++i) std::cout << a[i] << ' ';
    std::cout << '\n';
}
