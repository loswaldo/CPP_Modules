//
// Created by shaurmyashka on 7/14/21.
//

#include "Cat.h"

void Cat::makeSound() const {
	std::cout << getType() << " makes " << "meow" << std::endl;
}

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: Default destructor called" << std::endl;
}
