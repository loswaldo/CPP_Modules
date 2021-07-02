//
// Created by shaurmyashka on 6/30/21.
//

#include "HumanA.h"

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string humanName, Weapon &newWeapon) :name(humanName),
weapon(newWeapon){}

