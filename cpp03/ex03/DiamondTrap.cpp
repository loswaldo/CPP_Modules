//
// Created by shaurmyashka on 7/10/21.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(std::string newName, int hit, int energy, int attack) :
			ScavTrap(newName, hit, energy, attack),
			FragTrap(newName, hit, energy, attack),
			ClapTrap(newName, hit, energy, attack) {
	name = ClapTrap::name + "_clap_name";
	std::cout << YELLOW "DiamondTrap default destructor called" STD << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << DARK_BLUE "DiamondTrap " << name << " take " << amount << " points of damage!" STD << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	std::cout << DARK_BLUE "DiamondTrap " << name << " repaired " << amount << " points of hit points!" STD << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << DARK_BLUE "I\'m " << ClapTrap::name << STD << std::endl;
	std::cout << DARK_BLUE "And i\'m " << name << STD << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << YELLOW "DiamondTrap default destructor called" STD << std::endl;
}
