#include <iostream>

int sum(int n) {
    return n * (n + 1) / 2;
} 

int main() {
    std::cout << sum(10) << std::endl;
}