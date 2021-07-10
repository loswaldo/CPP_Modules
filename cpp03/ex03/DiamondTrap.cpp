//
// Created by shaurmyashka on 7/10/21.
//

#include "DiamondTrap.h"

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(std::string newName1, std::string newName) : ScavTrap(newName1), FragTrap(newName) {
	std::cout << YELLOW "ScavTrap default destructor called" STD << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}
