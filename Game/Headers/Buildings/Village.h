//
// Created by alexa on 24/10/2024.
//

#ifndef VILLAGE_H
#define VILLAGE_H
#include <vector>
#include "Building.h"

class Building ;

class Village {
protected:
    std::vector<Building*>  m_buildings;
    public:
    Village();
    ~Village();
    void addBuilding(Building* building);
};



#endif //VILLAGE_H
