#include <iostream>

int main() {
    int zhaba;
    int power;

    std::cout << "pls enter zhaba" << std::endl;
    std::cin >> zhaba;

    std::cout << "pls enter power" << std::endl;
    std::cin >> power;

    std::cout << "At the start of the program zhaba is - " << zhaba << std::endl;

    zhaba *= 2;

    if ( zhaba > 8 ) {
        std::cout << "Zhaba is greater than 8, so we will create something new here" << std::endl;
        int tigr(53);
        for ( int i = 0; i < 5; i++ ) {
            std::cout << "Here is tigr, he is your friend now, and he has " << tigr << " tooth in its mouth" << std::endl;
            tigr--;
        }
    } else {
        std::cout << "Zhaba is not greater than 8, so we won't create something new here" << std::endl;
        std::cout << "There is no tigr or something like that, so bye bye" << std::endl;
    }

    std::cout << "At the end of the program zhaba is - " << zhaba << std::endl;

    std::cout << "Wow, this shit works properly!" << std::endl;

    std::cout << "------------------------" << std::endl;
    std::cout << "so here we go again haha" << std::endl;

    int pchela;

    std::cout << "pls enter pchela" << std::endl;
    std::cin >> pchela;

    if ( pchela < 230 ) {
        int pchela(230);

        std::cout << "------------------------" << std::endl;
        std::cout << "pchela is " << pchela << std::endl;
    } else {
        std::cout << "------------------------" << std::endl;
        std::cout << pchela << std::endl;
    }
}
