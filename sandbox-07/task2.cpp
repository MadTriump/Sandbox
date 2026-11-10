#include <iostream>

int fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; ++i) {
        int next = a + b;
        a = b;
        b = next;
    }
    return a;
}

int main() {
    std::cout << fib(10) << ' ' << fib(40) << '\n';
}
