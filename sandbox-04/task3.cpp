#include <iostream>

int days_in_month(int m) {
    switch (m) {
        case 2: 
            return 28;
        case 4:  [[fallthrough]];
        case 6:  [[fallthrough]];
        case 9:  [[fallthrough]];
        case 11: 
            return 30;
            
        default: 
            return 31;
    }
}

int main() {
    std::cout << days_in_month(2) << ' ' 
              << days_in_month(4) << ' ' 
              << days_in_month(12) << '\n';
    return 0;
}