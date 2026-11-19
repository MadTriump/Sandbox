#include <iostream>

bool is_digit(char c)  { return c >= '0' && c <= '9'; }
bool is_letter(char c) { return c >= 'a' && c <= 'z'; }

void lex(const char* line) {
    bool first = true;
    int i = 0;
    while (line[i] != '\0') {
        if (!first) std::cout << ' ';
        first = false;

        char c = line[i];
        if (is_digit(c)) {
            std::cout << "Number(";
            while (is_digit(line[i])) {
                std::cout << line[i];
                ++i;
            }
            std::cout << ')';
        } else if (is_letter(c)) {
            std::cout << "Ident(";
            while (is_letter(line[i])) {
                std::cout << line[i];
                ++i;
            }
            std::cout << ')';
        } else {
            std::cout << "Punct(" << c << ')';
            ++i;
        }
    }
    std::cout << '\n';
}

int main() {
    lex("ab=7");
    lex("count=12+x");
}
