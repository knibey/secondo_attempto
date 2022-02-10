#include <iostream>

// struct Advertising {
//     int adshowed;
//     double clickpercent;
//     double moneypershow;
// };

// double howMuchMoney(Advertising advertising) {
//     return advertising.adshowed * advertising.moneypershow * advertising.clickpercent / 100;
// }

// void moneyEarned(Advertising advertising) {
//     std::cout << "Today we've showed " << advertising.adshowed << " ads" << std::endl;
//     std::cout << "Here is click percentage - " << advertising.clickpercent << '%' << std::endl;
//     std::cout << "Aaaand we got " << advertising.moneypershow << "$ per one click on ad" << std::endl;
//     std::cout << "We've earned " << howMuchMoney(advertising) << "$ today! Gratz!!!" << std::endl;
// }


struct Drob {
    int chislitel;
    int znamenatel;
};

int multiply(Drob drob) {
    return drob.chislitel * drob.znamenatel;
}

int main() {
    Advertising advert;
    Drob drob;

    std::cin >> drob.chislitel;
    std::cin >> drob.znamenatel;
    std::cout << multiply(drob) << std::endl;

    // std::cin >> advert.adshowed;
    // std::cin >> advert.clickpercent;
    // std::cin >> advert.moneypershow;

    // moneyEarned(advert);

    return 0;
}