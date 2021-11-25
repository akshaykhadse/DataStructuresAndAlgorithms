#include <iostream>

void toh(int n, char src, char buf, char dst) {
    if (n == 1) {
        std::cout << src << " to " << dst << std::endl;
    } else if (n == 2) {
        toh(1, src, dst, buf);
        toh(1, src, buf, dst);
        toh(1, buf, src, dst);
    } else {
        toh(n - 1, src, dst, buf);
        toh(1, src, buf, dst);
        toh(n - 1, buf, src, dst);
    }
}

int main() {
    toh(5, 'A', 'B', 'C');
}