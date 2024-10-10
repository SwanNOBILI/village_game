#ifndef POTION_H
#define POTION_H
#include "item.h"

using namespace std;

class Potion : public Item{
    unsigned short m_prices;
public:
    Potion();
    ~Potion();
};

#endif // POTION_H
