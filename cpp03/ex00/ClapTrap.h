//
// Created by shaurmyashka on 7/8/21.
//

#ifndef CPP00_CLAPTRAP_H
#define CPP00_CLAPTRAP_H

#include <iostream>

class ClapTrap {
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap(const ClapTrap & clapTrap);
	ClapTrap & operator=(const ClapTrap &clapTrap);
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP00_CLAPTRAP_H
