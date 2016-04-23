#include <iostream>
#include <string>

using namespace std;

enum class MONSTER_TYPE
{
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct Monster
{
    string name;
    int health;
    MONSTER_TYPE type;
};

string getMonsterType(Monster monster)
{
    if (monster.type == MONSTER_TYPE::OGRE)
        return "Ogre";
    if (monster.type == MONSTER_TYPE::DRAGON)
        return "Dragon";
    if (monster.type == MONSTER_TYPE::ORC)
        return "Orc";
    if (monster.type == MONSTER_TYPE::GIANT_SPIDER)
        return "Giant Spider";
    if (monster.type == MONSTER_TYPE::SLIME)
        return "Slime";
    return "Unknown";
}

void printMonster(Monster monster)
{
   cout << "This " << getMonsterType(monster) << " is named " << monster.name << " and has " << monster.health << " health." << endl;
}

int main()
{
    cout << "Hello world!" << endl;
    Monster monster1 = {"Torg", 145, MONSTER_TYPE::OGRE};
    Monster monster2 = {"Blurp", 23, MONSTER_TYPE::SLIME};

    printMonster(monster1);
    printMonster(monster2);
    return 0;
}
