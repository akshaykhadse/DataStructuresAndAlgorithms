#include <iostream>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return fact(n - 1) * n;
    }
}

int main() {
    std::cout << fact(3) << std::endl;
}