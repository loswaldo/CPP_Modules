//
// Created by shaurmyashka on 7/9/21.
//

#include "FragTrap.h"

FragTrap::FragTrap(std::string new_name, int hit, int energy, int attack) :
			ClapTrap(new_name, hit,energy, attack){
	std::cout << YELLOW "FragTrap default destructor called" STD << std::endl;
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

