#ifndef WARRIOR_H
#define WARRIOR_H
#include "hero.h"
#include "sword.h"

using namespace std;

class Warrior : public Hero{
private:
    unsigned short m_buffattack;
    Sword *m_sword;
public:
    Warrior();
    ~Warrior();
};

#endif // WARRIOR_H
