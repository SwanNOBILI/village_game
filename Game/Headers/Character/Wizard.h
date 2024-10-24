//
// Created by alexa on 21/10/2024.
//

#ifndef WIZARD_H
#define WIZARD_H
#include "Hero.h"
#include "../Items/Staff.h"


class Staff;

class Wizard : public Hero {
    Staff *m_staff;
    unsigned short m_evasion;
    public:
    Wizard();
    ~Wizard();
};



#endif //WIZARD_H
