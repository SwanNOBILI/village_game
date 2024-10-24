//
// Created by alexa on 21/10/2024.
//

#ifndef PALADIN_H
#define PALADIN_H
#include "Hero.h"
#include "../Items/Shield.h"
#include "../Items/Sword.h"

class Shield;
class Sword;

class Paladin : public Hero {
    Sword *m_sword;
    Shield *m_shield;
    public:
    Paladin();
    ~Paladin();
};


#endif //PALADIN_H
