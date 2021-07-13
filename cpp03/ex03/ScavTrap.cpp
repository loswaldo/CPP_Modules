//
// Created by shaurmyashka on 7/9/21.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string new_name, int hit, int energy, int attack) :
			ClapTrap(new_name, hit, energy, attack){
	std::cout << YELLOW "ScavTrap default destructor called" STD << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << BLUE "ScavTrap" << name << " have enterred in Gate keeper mode." STD<< std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << YELLOW "ScavTrap default destructor called" STD << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << BLUE "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" STD << std::endl;

}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << BLUE "ScavTrap " << name << " take " << amount << " points of damage!" STD << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << BLUE "ScavTrap " << name << " repaired " << amount << " points of hit points!" STD << std::endl;

}
