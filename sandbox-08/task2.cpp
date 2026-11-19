#include <iostream>

bool read_number(const char* s, int& i, int& value) {
    if (s[i] < '0' || s[i] > '9') {
        return false;
    }
    value = 0;
    while (s[i] >= '0' && s[i] <= '9') {
        value = value * 10 + (s[i] - '0');
        ++i;
    }
    return true;
}

void calc(const char* expr) {
    int i = 0;
    int left = 0, right = 0;

    if (!read_number(expr, i, left)) { std::cout << "error at " << i << '\n'; return; }

    char op = expr[i];
    if (op != '+' && op != '-' && op != '*') { std::cout << "error at " << i << '\n'; return; }
    ++i;

    if (!read_number(expr, i, right)) { std::cout << "error at " << i << '\n'; return; }

    if (expr[i] != '\0') {
        std::cout << "error at " << i << '\n';
        return;
    }

    int result = (op == '+') ? left + right : (op == '-') ? left - right : left * right;
    std::cout << result << '\n';
}

int main() {
    calc("12+34");
    calc("7*6x");
}
