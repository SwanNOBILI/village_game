#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"

using namespace std;

class Weapon : public Item{
private:
    unsigned short m_prices;
    int m_attack;
public:
    Weapon();
    ~Weapon();
    Weapon *createWeapon(const string &name , int dmg);
};

#endif // WEAPON_H
