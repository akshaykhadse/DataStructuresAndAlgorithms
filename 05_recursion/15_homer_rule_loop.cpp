#include <iostream>

double e(int x, int n) {
    double s = 1;
    for (; n > 0; n--) {
        s = 1 + static_cast<double>(x) / n * s;
    }
    return s;
}

int main() {
    std::cout << e(2, 4) << std::endl;
}