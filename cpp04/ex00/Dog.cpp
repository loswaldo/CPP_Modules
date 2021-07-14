//
// Created by shaurmyashka on 7/14/21.
//

#include "Dog.h"

Dog::Dog() {
	type = "Dog";
	std::cout << " Dog: Default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: Default destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << getType() << " makes " << "bark" << std::endl;
}
