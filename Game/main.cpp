#include <iostream>

#include "Headers/Character/Character.h"
#include "Headers/Character/Hero.h"
#include "Headers/Items/Heal.h"
#include "Headers/Items/Potion.h"
#include "Headers/Items/Shield.h"
#include "Headers/Items/Staff.h"
#include "Headers/Items/Sword.h"

int main() {
    Hero coach("coach" , 5 );
    Hero coach2("coach2" , 7);
    coach.attackCharacter(coach2);
    coach.show();
    std::cout << "----------" << std::endl;
    coach2.show();
    Inventory inventory;
    Heal Hpotion("La potion");
    inventory.addItems(Hpotion);
    inventory.addItems(Hpotion);
    inventory.show();
    inventory.removeItems(Hpotion);
    inventory.show();
    Staff Weatest("BamboolaStaff" );
    Weatest.show();
    Sword temp("BamboolaSword");
    temp.show();
    Shield calbarynovcampus("BamboolaShield");
    calbarynovcampus.show();
    inventory.addItems(temp);
    inventory.addItems(calbarynovcampus);
    inventory.addItems(Weatest);
    inventory.show();
    return 0;
}
