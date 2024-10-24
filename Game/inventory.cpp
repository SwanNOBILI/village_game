//
// Created by alexa on 21/10/2024.
//

#include "Headers/Inventory.h"

#include <iostream>
#include <ostream>

using namespace std;

Inventory::Inventory() {
    m_sizeMax = 10;
}
Inventory::~Inventory() = default;

void Inventory::removeItems(const Item &items) {
    if (!m_inventory.empty()) {
        for (int i = 0; i < m_sizeMax; i++) {
            if (&items == m_inventory[i]) {
                m_inventory.erase(m_inventory.begin() + i);
                break;
            }
        }
    }else {
        cout << "Inventory is empty" << endl;
    }
}

void Inventory::addItems(Item &item) {
    if (m_inventory.size() < m_sizeMax ) {
        m_inventory.push_back(&item);
    }else{
        cout << "Inventory is full" << endl << endl ;
    }
}

void Inventory::show() const {
    cout << "Size of inventory : " << m_sizeMax << endl;
    cout << "-------------------------------"<< endl;
    for (auto i : m_inventory){
        i->show();
    }
    cout << "-------------------------------"<< endl;
}

