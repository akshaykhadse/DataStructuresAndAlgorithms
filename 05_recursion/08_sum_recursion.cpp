#include <iostream>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return sum(n-1) + n;
    }
}

int main() {
    std::cout << sum(10) << std::endl;
}