//
// Created by alexa on 21/10/2024.
//

#ifndef SHOP_H
#define SHOP_H

#include "../Inventory.h"
#include "Building.h"

class Inventory;

class Shop : public Building {
    unsigned short m_gold;
    Inventory m_Inventory;
    public:
    Shop();
    ~Shop();
    void setInventory();
};



#endif //SHOP_H
