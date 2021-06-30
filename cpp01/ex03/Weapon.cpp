//
// Created by shaurmyashka on 6/30/21.
//

#include "Weapon.h"

void Weapon::setType(std::string typeName) {
	type = typeName;
}

std::string Weapon::getType() {
	return type;
}

Weapon::Weapon() {}
