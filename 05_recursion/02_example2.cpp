#include <iostream>

void fun2(int n) {
    if (n > 0) {
        fun2(n-1);
        std::cout << n << std::endl;
    }
}

int main() {
    int x = 3;
    fun2(x);
}