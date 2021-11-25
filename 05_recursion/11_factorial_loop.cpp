#include <iostream>

int fact(int n) {
    int f = 1;

    for (int i = 1; i <= n; i++) {
        f = f * i;
    }

    return f;
}

int main() {
    std::cout << fact(3) << std::endl;
}