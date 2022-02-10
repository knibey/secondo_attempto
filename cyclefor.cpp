#include <iostream>

int sumTo(int value) {
    int total = 0;

    for ( int i = 1; i <= value; ++i ) {
        total += i;
    }

    return total;
}

int main() {    
    for ( int i = 0; i < 20; i+=2 ) {
        std::cout << i << std::endl;
    }

    std::cout << sumTo(5) << std::endl;

    for (unsigned int count=8; count > 0; --count) {
        std::cout << count << " ";
    }

    return 0;
}