//
// Created by shaurmyashka on 6/30/21.
//

#ifndef CPP00_HUMANA_H
#define CPP00_HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA {
private:
	std::string name;
	Weapon weapon;
public:
	void attack();
	HumanA();
};


#endif //CPP00_HUMANA_H
