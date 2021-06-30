//
// Created by shaurmyashka on 6/30/21.
//

#include "HumanA.h"

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA() :name("Povar") {
weapon.setType("Kitchen knife");
}
