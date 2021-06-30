//
// Created by shaurmyashka on 6/30/21.
//

#include "HumanB.h"

void HumanB::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanB::HumanB() : name("Bubup") {}

HumanB::HumanB(std::string weaponType) : name("Bubup"){
weapon.setType(weaponType);
}
