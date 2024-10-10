#ifndef HEAL_H
#define HEAL_H
#include "potion.h"

using namespace std;

class Heal : public Potion{
private :
    unsigned short  m_hp ;
public:
    Heal();
    ~Heal();
};

#endif // HEAL_H
