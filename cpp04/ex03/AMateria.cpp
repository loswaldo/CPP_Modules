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

AMateria &AMateria::operator=(const AMateria &aMateria) {
	if (this != &aMateria) {
		this->type = aMateria.type;
	}
	return *this;
}

AMateria::AMateria(const AMateria &aMateria) : type(aMateria.type) {
}

AMateria::~AMateria() {
}
