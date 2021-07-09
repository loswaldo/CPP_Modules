//
// Created by shaurmyashka on 7/8/21.
//

#include "ClapTrap.h"


void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " repaired " << amount << " points of hit points!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << YELLOW "ClapTrap default destructor called" STD << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : name(new_name),
				hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << YELLOW "ClapTrap default constructor called" STD << std::endl;
}
