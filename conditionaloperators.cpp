#include <iostream>

int main() {
    int a;
    int b;


    std::cin >> a;
    std::cin >> b;

    if ( !(a == b) ) {
        std::cout << "a not equals b" << std::endl;
    } else {
        std::cout << "a equals b" << std::endl;
    }


    if ( (a == 10) || (b == 2) ) {
        std::cout << "number a = 10 or number b = 2" << std::endl;
    } else {
        std::cout << "number a != 10 and number b != 2" << std::endl;
    }

    if ( (a == 10) && (b == 5) ) {
        std::cout << "number a = 10 and number b = 5" << std::endl;
    } else {
        std::cout << "number a != 10 and number b != 5" << std::endl;
    }
    return 0;
}