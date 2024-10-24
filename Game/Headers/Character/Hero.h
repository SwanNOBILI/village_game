//
// Created by alexa on 21/10/2024.
//

#ifndef HERO_H
#define HERO_H
#include "Character.h"
#include "../Inventory.h"
#include "../Buildings/Shop.h"
#include "../Items/Weapon.h"


class Weapon;
class Shop;
class Inventory;

class Hero : public Character{
    protected:
    std::string m_name;
    unsigned short m_gold;
    Inventory m_inventory;
    public:
    Hero(const std::string &name , unsigned short attk);
    void show() const;
    Inventory getInventory() const;
    void setInventory(const Inventory &newInventory);
    ~Hero();
    void buy(Shop &shop);
    void equip(Weapon &wp);
    void drinkPotion();
    void talk();
};



#endif //HERO_H
