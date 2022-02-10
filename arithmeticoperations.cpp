#include <iostream>

int main() {
    int a = 8;
    int b = a++;
    std::cout << a << "\n"; // 9
    std::cout << b << "\n"; // 8

    return 0;
}