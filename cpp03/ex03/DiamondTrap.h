//
// Created by shaurmyashka on 7/10/21.
//

#ifndef CPP00_DIAMONDTRAP_H
#define CPP00_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap{
public:
	DiamondTrap(std::string newName1, std::string newName);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif //CPP00_DIAMONDTRAP_H
