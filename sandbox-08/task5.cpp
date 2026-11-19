#include <iostream>

int hex_digit(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

bool check_nmea(const char* s) {
    if (s[0] != '$') return false;

    int sum = 0;
    int i = 1;
    while (s[i] != '*') {
        if (s[i] == '\0') return false;
        sum = sum ^ s[i];
        ++i;
    }

    int hi = hex_digit(s[i + 1]);
    if (hi < 0) return false;
    int lo = hex_digit(s[i + 2]);
    if (lo < 0) return false;

    return sum == hi * 16 + lo;
}

int main() {
    const char* good = "$GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";
    const char* bad  = "$GPGGA,123519,4807.039,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";
    std::cout << check_nmea(good) << ' ' << check_nmea(bad) << '\n';
}
