#ifndef MINE_H
#define MINE_H
#include "building.h"
#include "hero.h"
#include "monster.h"
#include <vector>

using namespace std;

class Mine : public Building{
private:
    unsigned short m_level;
    vector<Monster*> m_monster;
public:
    Mine();
    ~Mine();
    void setMonster();
    void explorate(Hero &hero);
};

#endif // MINE_H
