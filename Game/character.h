#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

class Character{
private:
    string m_name;
    int m_maxHp;
    int m_hp;
    int m_attack;
    int m_defence;
public:
    Character();
    void attackCharacter(Character &enemy);
};

#endif // CHARACTER_H
