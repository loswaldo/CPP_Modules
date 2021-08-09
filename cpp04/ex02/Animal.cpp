//
// Created by shaurmyashka on 7/14/21.
//

#include "Animal.h"

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal: Default destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << getType() << " makes " << "???" << std::endl;
}

std::string Animal::getType() const{
	return type;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal: Assignation operator called" << std::endl;
	if (this != &animal)
		this->type = animal.getType();
	return *this;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	this->type = animal.getType();
}
