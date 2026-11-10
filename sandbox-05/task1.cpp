#include <cctype>
#include <cstring>
#include <iostream>

bool is_palindrome(const char* s) {
    int n = (int)std::strlen(s);
    for (int i = 0; i < n / 2; ++i) {
        char left  = (char)std::tolower((unsigned char)s[i]);
        char right = (char)std::tolower((unsigned char)s[n - 1 - i]);
        if (left != right) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << is_palindrome("Level") << ' '
              << is_palindrome("Radar") << ' '
              << is_palindrome("hello") << '\n';
}
