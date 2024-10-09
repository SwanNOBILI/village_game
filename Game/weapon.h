#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"

using namespace std;

class Weapon : public Item{
private:
    int m_prices;
    int m_attack;
public:
    Weapon();
    Weapon *createWeapon(const string &name , int dmg);
};

#endif // WEAPON_H
