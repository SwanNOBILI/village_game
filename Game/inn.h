#ifndef INN_H
#define INN_H
#include "building.h"
#include "hero.h"

class Inn : public Building{
public:
    Inn();
    void healHero(Hero &hero);
};

#endif // INN_H
