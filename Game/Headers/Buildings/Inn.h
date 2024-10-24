//
// Created by alexa on 21/10/2024.
//

#ifndef INN_H
#define INN_H
#include "Building.h"
#include "../Character/Hero.h"


class Hero;

class Inn :public Building{
public:
    Inn();
    ~Inn();
    void healHero(Hero *hero);
};



#endif //INN_H
