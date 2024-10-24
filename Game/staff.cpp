//
// Created by alexa on 21/10/2024.
//

#include "Headers/Items/Staff.h"
#include <iostream>

using namespace std;

Staff::Staff(const std::string &name) : Weapon(name){
  m_name = name;
  m_attack = 69;
  m_prices = 69 ;
}

Staff *Staff::createdWeapon(const std::string &name, int dmg) const {
  Staff *staff = new Staff(name);
  staff->setAttack(dmg);
  return staff;
}

void Staff::show() const {
  cout << m_name << endl;
  cout << "Staff attack : " <<m_attack << endl;
  cout << "Staff prices : " << m_prices << endl;
}

Staff::~Staff() {
  delete this ;
}
