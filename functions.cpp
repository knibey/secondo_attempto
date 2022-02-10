#include <iostream>

void callMeMaybe() {
    std::cout << "Here is my number, so call me maybe" << std::endl;
}

void printNumber(int number) {
    std::cout << "Here is your number: " << number << std::endl; 
}

int main() {
    int number;
    std::cout << "Enter your number: " << std::endl;
    std::cin >> number;
    callMeMaybe();
    printNumber(number);


    return 0;
}