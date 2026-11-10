#include <iostream>

int sum(const int* begin, const int* end) {
    int s = 0;
    while (begin != end) {
        s += *begin;
        begin++;
    }
    return s;
}

int main() {
    int a[3] = {1, 2, 3};
    std::cout << sum(a, a + 3) << ' ';
    std::cout << sum(a, a) << '\n';
}
