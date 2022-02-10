#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    double livedyears = 0;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    livedyears = static_cast<double>(age) / name.length();

    std::cout << "You've lived " << livedyears << " years for each letter in your name." << std::endl;

    return 0;
}