#ifndef SHOP_H
#define SHOP_H
#include "building.h"
#include "inventory.h"

using namespace std;

class Shop : public Building{
private :
    int m_gold ;
    Inventory m_inventory;
public:
    Shop();
    void setInventory();
};

#endif // SHOP_H
