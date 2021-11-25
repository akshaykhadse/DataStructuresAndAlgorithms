#include <iostream>

int e(int x, int n) {
    static int p = 1, f = 1;
    int r;

    if (n == 0) {
        return x;
    } else {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

int main() {
    std::cout << e(2, 4) << std::endl;
}