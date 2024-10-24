//
// Created by alexa on 21/10/2024.
//

#include "Headers/Items/Shield.h"
#include <iostream>

using namespace std;

Shield::Shield(const std::string &name) : Weapon(name) {
    m_name = name;
    m_attack = 0;
    m_defence = 5;
    m_prices = 50 ;
}

Shield *Shield::createShield(const std::string &name, int def) const {
    Shield *shield = new Shield(name);
    shield->setDefence(def);
    return shield ;
}

void Shield::show() const {
    cout << m_name << endl;
    cout << "defence : " <<m_defence << endl;
    cout << "Prices : " <<m_prices << endl;
}





Shield::~Shield() {
    delete this;
}
