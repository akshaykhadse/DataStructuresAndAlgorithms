#include <iostream>

int pow(int m, int n) {
    if (n == 0) {
        return 1;
    } else {
        return pow(m, n - 1) * m;
    }
}

int main() {
    std::cout << pow(2, 3) << std::endl;
}