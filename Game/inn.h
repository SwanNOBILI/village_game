#ifndef INN_H
#define INN_H
#include "building.h"
#include "hero.h"

using namespace std;

class Inn : public Building{
public:
    Inn();
    ~Inn();
    void healHero(Hero &hero);
};

#endif // INN_H
