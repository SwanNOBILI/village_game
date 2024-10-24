//
// Created by alexa on 21/10/2024.
//
#include <iostream>
#include "Headers/Character/Character.h"


Character::Character(const std::string &name) {
  m_name = name;
  m_maxHp = 100;
  m_hp = 100;
  m_attack = 1;
  m_defence = 10;
}

Character::~Character() = default;

void Character::show() const {
  std::cout << m_name << std::endl;
  std::cout << m_maxHp << std::endl;
  std::cout << m_hp << std::endl;
  std::cout << m_attack << std::endl;
  std::cout << m_defence << std::endl;
}


void Character::attackCharacter(Character &character) const {
  if(character.getHp()-(m_attack*10 /character.getDefence()) > 0){
    character.setHp(character.getHp()-(m_attack*10 /character.getDefence()));
  }else{
    character.setHp(0);
  }
}


int unsigned short Character::getMaxHp() const {
  return m_maxHp;
}

int unsigned short Character::getHp() const {
  return m_hp;
}

int unsigned short Character::getAttack() const {
  return m_attack;
}

int unsigned short Character::getDefence() const {
  return m_defence;
}

void Character::setHp(const unsigned short newHp) {
  m_hp = newHp;
}
