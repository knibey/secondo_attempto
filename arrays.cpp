#include <iostream>

int main() {
    // int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    // int arrSize = sizeof(array) / sizeof(array[0]);
    // int uservalue;

    // std::cin >> uservalue;

    // for ( int i = 0; i < arrSize; i++ ) {
    //     if ( array[i] == uservalue ) {
    //         std::cout << i << std::endl;
    //         break;
    //     }
    // }

    int scores[] = { 73, 85, 84, 95, 78 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
 
    int maxScore = 0;
    int bestindex = 0;
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > maxScore) {
            maxScore = scores[student];
            bestindex += 1;
        }
 
    std::cout << "The best index was " << bestindex << '\n';

    return 0;
}