#include <iostream>
#include <algorithm>

int main() {
    const int length = 5;
    int array[length] = { 5, 3, 2, 1, 4 };

    for ( int startIndex = 0; startIndex < length - 1; ++startIndex ) {
        int biggestIndex = startIndex;

        for ( int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex ) {
            if ( array[currentIndex] < array[biggestIndex] ) {
                biggestIndex = currentIndex;
            }
        }

        std::swap(array[biggestIndex], array[startIndex]);
    }

    for ( int i = 0; i < length; i++ ) {
        std::cout << array[i] << std::endl;
    }

    return 0;
}