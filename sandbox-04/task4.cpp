#include <iostream>

bool every_third() {
    static int count = 0; 
    
    count = count + 1;
    
    if (count == 3) {
        count = 0;
        return true;
    }
    
    return false;
}

int main() {
    for (int i = 0; i < 7; ++i) {
        std::cout << every_third() << ' ';
    }
    std::cout << '\n';
    return 0;
}
