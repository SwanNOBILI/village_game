#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

class Character{
private:
    string m_name;
    unsigned short m_maxHp;
    unsigned short m_hp;
    unsigned short m_attack;
    unsigned short m_defence;
public:
    Character();
    ~Character();
    void attackCharacter(Character &enemy);
};

#endif // CHARACTER_H
