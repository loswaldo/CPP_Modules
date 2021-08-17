//
// Created by shaurmyashka on 8/9/21.
//

#include "Ice.h"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
