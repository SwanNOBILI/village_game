//
// Created by alexa on 21/10/2024.
//

#ifndef STAFF_H
#define STAFF_H

#include "Weapon.h"


class Staff : public Weapon{
    unsigned short m_attack ;
    public:
    Staff(const std::string &name);
    Staff *createdWeapon(const std::string &name, int dmg) const;
    void show() const;
    ~Staff();
};



#endif //STAFF_H
