//
// Created by alexa on 24/10/2024.
//

#include "Headers/Buildings/Village.h"



Village::Village() = default;
Village::~Village() = default;


void Village::addBuilding(Building* building) {
    m_buildings.push_back(building);
}