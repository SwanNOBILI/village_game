#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"
#include <vector>

class Inventory{
private :
    int m_size ;
    int m_sizeMax;
    vector<Item*> m_inventory;
public:
    Inventory();
};

#endif // INVENTORY_H
