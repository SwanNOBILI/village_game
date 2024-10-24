//
// Created by alexa on 21/10/2024.
//

#ifndef SWORD_H
#define SWORD_H

#include "Weapon.h"



class Sword : public Weapon{
    public:
    Sword(const std::string &name);
    Sword *createWeapon(const std::string &name, int dmg) const ;
    void show() const;
    ~Sword();
};



#endif //SWORD_H
