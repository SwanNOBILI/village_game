//
// Created by alexa on 21/10/2024.
//

#include "Headers/Items/Weapon.h"

#include <iostream>

using namespace std;

Weapon::Weapon(const std::string &name) : Item(name){
    m_prices = 50 ;
    m_attack = 0 ;
}

Weapon::~Weapon() {
    delete this ;
}

Weapon *Weapon::createWeapon(const std::string &name, int dmg) const {
    Weapon *weapon = new Weapon(name);
    weapon->setAttack(dmg);
    return weapon ;
}

void Weapon::setAttack(unsigned short newAttack) {
    m_attack = newAttack;
}
void Weapon::setDefence(unsigned short newDefence) {
    m_defence = newDefence;
}




void Weapon::show() const {
    cout << "Prices : "<< m_prices << endl;
    cout << "Attack : " << m_attack << endl;
}


