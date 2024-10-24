//
// Created by alexa on 21/10/2024.
//

#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"
#include "../Items/Sword.h"


class Sword;

class Warrior : public Hero{
    Sword* m_sword;
    unsigned short m_attack;
    public:
    Warrior();
    ~Warrior();
};



#endif //WARRIOR_H
