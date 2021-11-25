#include <iostream>

int pow(int m, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        return pow(m * m, n / 2);
    } else {
        return m * pow(m * m, (n - 1) / 2);
    }
}

int main() {
    std::cout << pow(2, 4) << std::endl;
}