//
// Created by shaurmyashka on 7/10/21.
//

#ifndef CPP00_DIAMONDTRAP_H
#define CPP00_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap{
protected:
	std::string name;
public:
	DiamondTrap(std::string newName, int hit = 100, int energy = 100, int attack = 30);
//	DiamondTrap(std::string newName);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	using ScavTrap::attack;
	void whoAmI();
	~DiamondTrap();

};


#endif //CPP00_DIAMONDTRAP_H
