#ifndef WIZARD_H
#define WIZARD_H
#include "hero.h"
#include "staff.h"

using namespace std;

class Wizard : public Hero{
private:
    unsigned short m_evasion;
    Staff *m_staff;
public:
    Wizard();
    ~Wizard();
};

#endif // WIZARD_H
