#include <iostream>

bool isMathOperation(char mathoperation) {
    if (mathoperation == '+' || mathoperation == '-' || mathoperation == '*' || mathoperation == '/') {
        return true;
    }
    return false;
}

int main() {
    double firstnumber, secondnumber;
    char mathoperation;

    std::cout << "Enter a double value: ";
    std::cin >> firstnumber;
    std::cout << "------------------" << std::endl;
    std::cout << "Enter a double value: ";
    std::cin >> secondnumber;
    std::cout << "------------------" << std::endl;

    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> mathoperation;
    std::cout << "------------------" << std::endl;

    if (isMathOperation(mathoperation)) {
        switch(mathoperation) {
            case '+':
            std::cout << firstnumber << " + " << secondnumber << " = " << firstnumber + secondnumber << std::endl;
            break;
            case '-':
            std::cout << firstnumber << " - " << secondnumber << " = " << firstnumber - secondnumber << std::endl;
            break;
            case '*':
            std::cout << firstnumber << " * " << secondnumber << " = " << firstnumber * secondnumber << std::endl;
            break;
            case '/':
            std::cout << firstnumber << " / " << secondnumber << " = " << firstnumber / secondnumber << std::endl;
            break;
        }
    } else {
        std::cout << "You have entered wrong symbol!" << std::endl;
    }

    return 0;
}