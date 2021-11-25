#include <iostream>

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    int t0 = 0, t1 = 1;
    int s = 0;
    for (int i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main() {
    for (int i = 1; i < 10; i++) {
        std::cout << fib(i) << std::endl;
    }
}