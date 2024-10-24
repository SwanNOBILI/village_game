//
// Created by alexa on 21/10/2024.
//

#ifndef HEAL_H
#define HEAL_H
#include "Item.h"
#include "Potion.h"


class Heal : public Potion{
    unsigned short m_hp ;
    public:
    explicit Heal(const std::string &name);
    ~Heal();
    void show() const;
};



#endif //HEAL_H
