#ifndef SHOP_H
#define SHOP_H
#include "building.h"
#include "inventory.h"

using namespace std;

class Shop : public Building{
private :
    unsigned short m_gold ;
    Inventory m_inventory;
public:
    Shop();
    ~Shop();
    void setInventory();
};

#endif // SHOP_H
