#ifndef MINE_H
#define MINE_H
#include "building.h"
#include "hero.h"
#include "monster.h"
#include <vector>

class Mine : public Building{
private:
    int m_level;
    vector<Monster*> m_monster;
public:
    Mine();
    void setMonster();
    void explorate(Hero &hero);
};

#endif // MINE_H
