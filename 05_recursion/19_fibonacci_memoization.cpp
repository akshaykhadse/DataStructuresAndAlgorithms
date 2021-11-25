#include <iostream>

int fib(int n, int F[], const int len) {
    if (n <= 1) {
        F[n] = n;
        return n;
    } else {
        if (F[n - 2] == -1) {
            F[n - 2] = fib(n - 2, F, len);
        }
        if (F[n - 1] == -1) {
            F[n - 1] = fib(n - 1, F, len);
        }
        return F[n - 2] + F[n - 1];
    }
}

int main() {
    // Create memoization array
    const int len = 10;
    int F[len];
    for (int i = 0; i < len; i++) {
        F[i] = -1;;
    }

    // Call the function
    for (int i = 1; i < 10; i++) {
        std::cout << fib(i, F, len) << std::endl;
    }
}