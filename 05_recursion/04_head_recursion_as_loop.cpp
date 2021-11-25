#include <iostream>

void fun(int n) {
    int i = 0;
    while (i <= n) {
        std::cout << i << std::endl;
        i++;
    }
}

int main() {
    int a = 5;
    fun(a);
}