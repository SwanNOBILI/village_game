#ifndef HERO_H
#define HERO_H
#include "character.h"
#include "inventory.h"
#include "item.h"
#include "shop.h"
#include "weapon.h"

using namespace std;

class Hero : public Character{
private:
    int m_gold;
    Inventory m_inventory;
public:
    Hero();
    void buy(Shop &shop);
    void addToInventory(const Item &it);
    void equip(Weapon &wp);
    void drinkPotion();
    void talk();
};

#endif // HERO_H
