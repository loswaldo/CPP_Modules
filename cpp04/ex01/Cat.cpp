//
// Created by shaurmyashka on 7/14/21.
//

#include "Cat.h"

#define STD "\033[0m"
#define GREEN "\033[32m"

void Cat::makeSound() const {
	std::cout << GREEN << getType() << " makes " << "meow" STD << std::endl;
}

Cat::Cat() {
	std::cout << GREEN << "Cat: Default constructor called" STD << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {
	delete brain;
	std::cout << GREEN << "Cat: Default destructor called" STD << std::endl;
}

Cat::Cat(const Cat &cat) {
	this->brain = new Brain(*(cat.brain));

}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat)
	{
		delete brain;
		this->brain = new Brain(*(cat.brain));
		brain = new Brain();
	}
	return *this;
}
