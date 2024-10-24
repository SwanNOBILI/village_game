//
// Created by alexa on 21/10/2024.
//

#include "Headers/Character/Hero.h"
#include <iostream>

using namespace std;

Hero::Hero(const string &name , unsigned short attk): Character(name) {
    m_name = name;
    m_gold = 100;
    m_attack = attk;
    m_defence = 3;
}

Hero::~Hero() = default;

void Hero::show() const {
    cout << m_name << " " << "Or : " << m_gold << endl;
    cout << "Attaque : " <<m_attack << " " << " Defence : " <<m_defence << endl;
    cout << "Vie : " << m_hp << endl;
}


Inventory Hero::getInventory() const {
    return m_inventory;
}

void Hero::setInventory(const Inventory &newInventory ) {
    m_inventory = newInventory;
}
