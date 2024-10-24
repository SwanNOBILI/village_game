//
// Created by alexa on 21/10/2024.
//

#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"



class Weapon : public Item{
    protected:
    unsigned short m_defence;
    unsigned short m_prices;
    unsigned short m_attack;
public:
    Weapon(const std::string &name);
    ~Weapon();
    virtual Weapon* createWeapon(const std::string &name , int dmg)const;
    void setAttack(unsigned short newAttack);
    void setDefence(unsigned short newDefence);
    virtual void show() const;
};



#endif //WEAPON_H
