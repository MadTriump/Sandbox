#include <iostream>

int main() {
    int m[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    int t[4][3];

    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 4; ++c) {
            t[c][r] = m[r][c];
        }
    }

    for (int r = 0; r < 4; ++r) {
        for (int c = 0; c < 3; ++c) {
            if (c > 0) std::cout << ' ';
            std::cout << t[r][c];
        }
        std::cout << '\n';
    }
}
