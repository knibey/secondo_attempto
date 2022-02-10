#include <iostream>

int main() {
    const double gravity = 1.6;
    double towerheight;
    int seconds = 0;

    std::cout << "Enter the initial height of the tower in meters: ";
    std::cin >> towerheight;

    std::cout << "Enter the initial count of seconds: ";
    std::cin >> seconds;

    double ballheight = 0;

    for ( int i = 0; i <= seconds; i++ ) {
        ballheight = (gravity * i*i)/2;
        double currentheight = towerheight - ballheight;

        if (currentheight <= 0) {
            std::cout << "At " << i << " second the ball is on the ground" << std::endl;
            break;
        }

        std::cout << "At " << i << " seconds, the ball is at height: " << currentheight << " meters"<< std::endl;
    }

    return 0;
}