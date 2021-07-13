//
// Created by shaurmyashka on 7/9/21.
//

#include "FragTrap.h"

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name) {
	std::cout << YELLOW "FragTrap default destructor called" STD << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

void FragTrap::attack(const std::string &target) {
	std::cout << GREEN "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" STD << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << GREEN "FragTrap " << name << " take " << amount << " points of damage!" STD << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << GREEN "FragTrap " << name << " repaired " << amount << " points of hit points!" STD << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << YELLOW "FragTrap default destructor called" STD << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << GREEN "FragTrap "<< name << " gives high five to guys" STD << std::endl;
}

