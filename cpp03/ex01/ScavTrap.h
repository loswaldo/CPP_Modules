//
// Created by shaurmyashka on 7/9/21.
//

#ifndef CPP00_SCAVTRAP_H
#define CPP00_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string new_name);
	~ScavTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};


#endif //CPP00_SCAVTRAP_H
