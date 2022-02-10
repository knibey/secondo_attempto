#include <iostream>

int doubleNumber(int value) {
    return value *= 2;
}

int main() {
    int uservalue;

    std::cin >> uservalue;
    std::cout << doubleNumber(uservalue) << std::endl;

    return 0;
}