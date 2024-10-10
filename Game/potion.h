#ifndef POTION_H
#define POTION_H
#include "item.h"

using namespace std;

class Potion : public Item{
    int m_prices;
public:
    Potion();
};

#endif // POTION_H
