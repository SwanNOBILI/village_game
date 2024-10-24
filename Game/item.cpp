//
// Created by alexa on 21/10/2024.
//

#include "Headers/Items/Item.h"


#include <iostream>
#include <ostream>

using namespace std;


Item::Item(const std::string &name) {
    m_name = name;
}

Item::~Item() = default;


void Item::show() const{
    cout<< m_name << endl;
}
