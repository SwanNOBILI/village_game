//
// Created by alexa on 21/10/2024.
//

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
#include <vector>
#include "Items/Item.h"


class Inventory {
    private:
    unsigned short m_sizeMax;
    std::vector<Item*> m_inventory;
    public:
    Inventory();
    ~Inventory();
    void removeItems(const Item &items);
    void addItems( Item &items);
    void show() const;
};



#endif //INVENTORY_H
