#include <iostream>

void fun1(int n) {
    if (n > 0) {
        std::cout << n << std::endl;
        fun1(n-1);
    }
}

int main() {
    int x = 3;
    fun1(x);
}