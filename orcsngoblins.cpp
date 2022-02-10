#include <iostream>
#include <string>

enum class MonsterType {
    OGRE,
    GOBLIN,
    SKELETON,
    ORC
};

struct Monster {
    MonsterType type;
    std::string name;
    int hp;
};

std::string getMonsterType(Monster monster) {
    switch(monster.type) {
        case MonsterType::OGRE:
        return "Ogre";
        case MonsterType::GOBLIN:
        return "Goblin";
        case MonsterType::SKELETON:
        return "Skeleton";
        case MonsterType::ORC:
        return "Orc";
    }
}

void printMonster(Monster monster) {
    std::cout << "This " << getMonsterType(monster) << " is named " << monster.name << " and has " << monster.hp << " health." << std::endl;
}

int main() {
    Monster ogre = { MonsterType::OGRE, "Jacob", 100 };

    printMonster(ogre);

    return 0;
}