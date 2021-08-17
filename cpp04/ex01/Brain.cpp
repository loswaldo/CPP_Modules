//
// Created by shaurmyashka on 7/14/21.
//

#include "Brain.h"

#define YELLOW "\033[33m"
#define STD "\033[0m"

Brain::Brain() {
	std::cout << YELLOW "Brain: Default constructor called" STD << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "";
	}
}

Brain::Brain(std::string *array) {
	std::cout << YELLOW "Brain: Default constructor with array called" STD << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (array[i].length() != 0)
			ideas[i] = array[i];
		else
			ideas[i] = "";

	}
}

Brain::~Brain() {
	std::cout <<  YELLOW "Brain: Default destructor called" STD << std::endl;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << YELLOW "Brain: Assignation operator called" STD << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100 && this->ideas[i] != ""; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return *this;
}

void Brain::setIdeas(std::string *array) {
	for (int i = 0; i < 100; i++)
		if (array[i].length() != 0)
			ideas[i] = array[i];
}

Brain::Brain(const Brain &brain) {
	std::cout << YELLOW "Brain: Copy constructor called" STD << std::endl;
	for (int i = 0; i < 100 && this->ideas[i] != ""; i++)
		this->ideas[i] = brain.ideas[i];
}
