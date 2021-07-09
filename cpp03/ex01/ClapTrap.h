//
// Created by shaurmyashka on 7/8/21.
//

#ifndef CPP00_CLAPTRAP_H
#define CPP00_CLAPTRAP_H

#include <iostream>

#define BOLD "\033[1m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define DARK_BLUE "\033[34m"
#define RED "\033[31m"
#define BLUE "\033[36m"
#define STD "\033[0m"

class ClapTrap {
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP00_CLAPTRAP_H
