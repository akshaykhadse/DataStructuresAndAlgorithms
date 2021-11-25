#include <iostream>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 2) + fib(n - 1);
    }
}

int main() {
    for (int i = 1; i < 10; i++) {
        std::cout << fib(i) << std::endl;
    }
}