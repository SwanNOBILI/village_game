#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"
#include <vector>

using namespace std;

class Inventory{
private :
    unsigned short m_size ;
    unsigned short m_sizeMax;
    vector<Item*> m_inventory;
public:
    Inventory();
    ~Inventory();
    void removeItems(const Item &Items);
    void addItems(const Item &Items);
};

#endif // INVENTORY_H
