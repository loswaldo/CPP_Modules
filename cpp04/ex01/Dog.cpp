//
// Created by shaurmyashka on 7/14/21.
//

#include "Dog.h"

#define BLUE "\033[36m"
#define STD "\033[0m"

Dog::Dog() {
	type = "Dog";
	std::cout << BLUE << "Dog: Default constructor called" STD << std::endl;
	std::string array[100] = {"I love my tail",
						   "I love the ball, my human & tail again",
						   "Go outside!!!!! Wof", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
	brain = new Brain();
	brain->setIdeas(array);
}


Dog::~Dog() {
	std::cout << BLUE << "Dog: Default destructor called" STD << std::endl;
	delete brain;
}

void Dog::makeSound() const {
	std::cout << BLUE << getType() << " makes " << "bark" STD << std::endl;
}

Dog::Dog(const Dog &dog) {
	this->brain = new Brain(*(dog.brain));

}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog)
	{
		delete brain;
		this->brain = new Brain(*(dog.brain));
		brain = new Brain();
	}
	return *this;
}