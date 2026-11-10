#include <iostream>

int main() {
    unsigned i = 10;
    while (true) {
        std::cout << i << (i == 0 ? "" : " ");
        if (i == 0) {
            break; 
        }
        
        i--;
    }
    
    std::cout << '\n';
    return 0;
}