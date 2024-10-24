//
// Created by alexa on 21/10/2024.
//

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>


class Character {
protected:
    std::string m_name;
    unsigned short m_maxHp;
    unsigned short m_hp;
    unsigned short m_attack;
    unsigned short m_defence;
    public:
    Character(const std::string &name);
    ~Character();
    int unsigned short getMaxHp() const;
    int unsigned short getHp() const;
    int unsigned short getAttack() const;
    int unsigned short getDefence() const;
    void setHp(unsigned short newHp);
    virtual void attackCharacter(Character &character) const ;
    virtual void show() const;
};



#endif //CHARACTER_H
