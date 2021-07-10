//
// Created by shaurmyashka on 7/9/21.
//

#ifndef CPP00_FRAGTRAP_H
#define CPP00_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap{
public:
	FragTrap(std::string new_name);
	~FragTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys();
};


#endif //CPP00_FRAGTRAP_H
