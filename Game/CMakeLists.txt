cmake_minimum_required(VERSION 3.29)
project(TP_Village_Clion)

set(CMAKE_CXX_STANDARD 20)

include_directories("${TP-Village-Clion}/Headers")

add_executable(TP_Village_Clion main.cpp
        Character.cpp
        Headers/Character/Character.h
        Hero.cpp
        Headers/Character/Hero.h
        Monster.cpp
        Headers/Character/Monster.h
        Warrior.cpp
        Headers/Character/Warrior.h
        Wizard.cpp
        Headers/Character/Wizard.h
        Paladin.cpp
        Headers/Character/Paladin.h
        Inventory.cpp
        Headers/Inventory.h
        Building.cpp
        Headers/Buildings/Building.h
        Inn.cpp
        Headers/Buildings/Inn.h
        Mine.cpp
        Headers/Buildings/Mine.h
        Shop.cpp
        Headers/Buildings/Shop.h
        Item.cpp
        Headers/Items/Item.h
        Potion.cpp
        Headers/Items/Potion.h
        Weapon.cpp
        Headers/Items/Weapon.h
        Shield.cpp
        Headers/Items/Shield.h
        Sword.cpp
        Headers/Items/Sword.h
        Staff.cpp
        Headers/Items/Staff.h
        Heal.cpp
        Headers/Items/Heal.h
        Village.cpp
        Headers/buildings/Village.h
)
