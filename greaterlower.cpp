#include <iostream>

int main() {
    int first, second;

    std::cout << "Enter number: " << std::endl;
    std::cin >> first;

    std::cout << "Enter lower number: " << std::endl;
    std::cin >> second;

    if ( second > first ) {
        int temp = first;
        first = second;
        second = temp;

        std::cout << "changing numbers" << std::endl;
    }

    std::cout << "greater is " << first << std::endl;
    std::cout << "lower is " << second << std::endl;


    return 0;
}