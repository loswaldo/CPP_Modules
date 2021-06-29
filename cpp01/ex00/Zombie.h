//
// Created by shaurmyashka on 6/29/21.
//

#ifndef CPP00_ZOMBIE_H
#define CPP00_ZOMBIE_H

#include <iostream>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string zombie_name);
	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif //CPP00_ZOMBIE_H
