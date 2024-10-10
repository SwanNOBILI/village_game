#ifndef PALADIN_H
#define PALADIN_H
#include "hero.h"
#include "shield.h"
#include "sword.h"

using namespace std;

class Paladin : public Hero{
private :
    Sword *m_sword;
    Shield *m_shield;
public:
    Paladin();
    ~Paladin();
};

#endif // PALADIN_H
