#include <iostream>
#include <algorithm>

int main() {
    const int length(9);
    int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };

    for ( int iteration = 0; iteration < length - 1; ++iteration ) {
        int endOfArrayIndex = length - iteration;
        bool swapped = false;

        for ( int currentIndex = 0; currentIndex < endOfArrayIndex - 1; ++currentIndex ) {
            if ( array[currentIndex] > array[currentIndex + 1] ) {
                std::swap(array[currentIndex], array[currentIndex + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            std::cout << "Early termination on iteration: " << iteration+1 << std::endl;
            break;
        }
    }

    for ( int i = 0; i < length; i++ ) {
        std::cout << array[i] << std::endl;
    }

    return 0;
}