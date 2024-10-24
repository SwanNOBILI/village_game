//
// Created by alexa on 21/10/2024.
//

#include "Headers/Items/Sword.h"

#include <iostream>
#include <ostream>

using namespace std;

Sword::Sword(const std::string &name) : Weapon(name) {
    m_name = name;
    m_attack = 5 ;
    m_defence = 0;
    m_prices = 15 ;
}

Sword *Sword::createWeapon(const std::string &name, int dmg) const {
    Sword *sword = new Sword(name);
    sword->setAttack(dmg);
    return sword;
}

void Sword::show() const {
    cout << m_name << endl;
    cout << "attaque : " << m_attack << endl;
    cout << "prices : " <<m_prices << endl;

}

Sword::~Sword() {
    delete this;
}
