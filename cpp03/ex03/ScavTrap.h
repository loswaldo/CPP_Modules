//
// Created by shaurmyashka on 7/9/21.
//

#ifndef CPP00_SCAVTRAP_H
#define CPP00_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(std::string new_name, int hit = 100, int energy = 50, int attack = 20);
	~ScavTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};


#endif //CPP00_SCAVTRAP_H
