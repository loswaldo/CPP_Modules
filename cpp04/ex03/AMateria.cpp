//
// Created by shaurmyashka on 8/9/21.
//

#include "AMateria.h"

AMateria::AMateria(const std::string &newType) {
	type = newType;
}

std::string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
std::cout << "use materia for " << target.getName() << std::endl;
}
