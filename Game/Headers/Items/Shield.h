//
// Created by alexa on 21/10/2024.
//

#ifndef SHIELD_H
#define SHIELD_H

#include "Item.h"
#include "Shield.h"
#include "Weapon.h"


class Shield : public Weapon{
    public:
    Shield(const std::string &name);
    Shield *createShield(const std::string &name, int def) const;
    void show() const ;
    ~Shield();
};



#endif //SHIELD_H
