#include <iostream>

int main() {
    int count = 5;
    char a = 'a';

    /*while ( count <= 26 ) {
        std::cout << a << " - " << static_cast<int>(a) << std::endl;
        ++count;
        ++a;
    }*/

    /*while ( a <= 'z' ) {
        std::cout << a << " - " << static_cast<int>(a) << std::endl;
        ++a;
    }*/

    /*int outer = 5;
    while ( outer >= 1 ) {
        int inner = outer;

        while ( inner >= 1 ) {
            std::cout << inner-- << " ";
        }

        std::cout << "\n";
        --outer;
    }*/

    /*int outer = 1;
    while ( outer <= 5 ) {
        int inner = 5;

        while ( inner >= 1 ) {
            if ( inner <= outer ) {
                std::cout << inner << " ";
            } else {
                std::cout << "  ";
            }

            --inner;
        }

        std::cout << "\n";
        ++outer;
    }*/

    int outer = 1;
    while (outer <= 5) {
        int inner = 5;
 
        while (inner >= 1) {
            if (inner <= outer)
                std::cout << inner << " ";
            else
                std::cout << "  ";
 
            --inner;
        }
 
        std::cout << "\n";
 
        ++outer;
    }

    return 0;
}