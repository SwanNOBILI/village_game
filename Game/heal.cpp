//
// Created by alexa on 21/10/2024.
//

#include "Headers/Items/Heal.h"

#include <iostream>
#include <ostream>

#include "Headers/Items/Item.h"

using namespace std;

class Potion;

Heal::Heal(const std::string &name) : Potion(name) {
    m_name = name;
    m_prices = 5 ;
    m_hp = 20;
}

Heal::~Heal() = default;

void Heal::show() const {
    cout << m_name << endl;
    cout << m_prices<< endl;
    cout << m_hp << endl;
}


