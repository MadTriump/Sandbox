#include <iostream>

int collatz_steps(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        steps = steps + 1;
    }
    return steps;
}

int main() {
    int max_number = 1;
    int max_steps = 0;

    for (int i = 1; i < 100; ++i) {
        int steps = collatz_steps(i);
        if (steps > max_steps) {
            max_steps = steps;
            max_number = i;
        }
    }

    std::cout << max_number << ' ' << max_steps << '\n';
    return 0;
}