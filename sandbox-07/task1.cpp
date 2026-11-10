#include <iostream>

int main() {
    const long long limit = 2147483647LL;
    long long f = 1;
    int n = 1;

    while (f * (n + 1) <= limit) {
        ++n;
        f = f * n;
    }
    std::cout << n << '\n';
}
