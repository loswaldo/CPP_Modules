//
// Created by shaurmyashka on 8/9/21.
//

#include "Cure.h"

Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

AMateria *Cure::clone() const {
	return new Cure(); /*todo не знаю. правильно ли это*/
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
}
