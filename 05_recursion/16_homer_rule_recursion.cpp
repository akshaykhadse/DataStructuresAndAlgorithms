#include <iostream>

double e(int x, int n) {
    static double s = 1;
    if (n == 0) {
        return s;
    }

    s =  1 + static_cast<double>(x) / n * s;
    return e(x, n - 1);
}

int main() {
    std::cout << e(2, 4) << std::endl;
}