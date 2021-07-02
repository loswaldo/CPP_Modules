//
// Created by shaurmyashka on 6/30/21.
//

#ifndef CPP00_HUMANB_H
#define CPP00_HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB {
private:
	std::string name;
	Weapon *weapon;
public:
	void attack();
	void setWeapon(Weapon &newWeapon);
	HumanB(std::string humanName);
};


#endif //CPP00_HUMANB_H
