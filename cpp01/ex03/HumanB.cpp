//
// Created by shaurmyashka on 6/30/21.
//

#include "HumanB.h"

void HumanB::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string humanName) : name(humanName), weapon(NULL){
//	weapon->setType("none");
}

void HumanB::setWeapon(Weapon &newWeapon) {
	weapon = &newWeapon;
}
