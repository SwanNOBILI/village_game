//
// Created by alexa on 21/10/2024.
//

#ifndef MINE_H
#define MINE_H
#include <vector>
#include "../Character/Hero.h"
#include "Building.h"
#include "../Character/Monster.h"


class Hero;
class Monster;

class Mine :public Building {
    unsigned short m_level;
    std::vector<Monster*> m_monsters;
    public:
    Mine();
    ~Mine();
    void setMonsters();
    void explorate(Hero &hero);
};



#endif //MINE_H
