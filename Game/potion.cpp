//
// Created by alexa on 21/10/2024.
//

#include "Headers/Items/Potion.h"

#include <iostream>
#include <ostream>


Potion::Potion(const std::string &name) : Item(name){
    m_name = name ;
    m_prices = 0;
}

Potion::~Potion() = default;
