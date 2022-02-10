#include <iostream>

enum Colors {
    COLOR_DARK,
    COLOR_LIGHT,
};

enum Creatures {
    CREATURES_OGRE,
    CREATURES_GOBLIN,
    CREATURES_SKELETON,
    CREATURES_ORC,
    CREATURES_TROLL
};


int main() {
    Creatures ogre(CREATURES_OGRE);

    std::cout << ogre << std::endl;
    return 0;
}