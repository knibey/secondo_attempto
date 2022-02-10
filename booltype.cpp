#include <iostream>

bool isPrime(int x) {
    if ( x == 2 ) {
        return true;
    }
    
    if ( x < 2 ) {
        return false;
    }
    
    for ( int i = 2; i * i <= x; i++ ) {
        if ( x % i == 0 ) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::cout << "Enter number less than 10 - ";
    int number;
    std::cin >> number;

    bool prime = isPrime(number);

    if (prime) {
        std::cout << "the digit is prime" << std::endl;
    } else {
        std::cout << "the digit is not prime" << std::endl;
    }

    return 0;
}