//
// Created by alexa on 21/10/2024.
//

#ifndef POTION_H
#define POTION_H
#include "Item.h"



class Potion : public Item{
    protected:
    unsigned short m_prices;
    public:
    explicit Potion(const std::string &name);
    ~Potion();
};



#endif //POTION_H
