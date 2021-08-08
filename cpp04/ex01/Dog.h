//
// Created by shaurmyashka on 7/14/21.
//

#ifndef CPP00_DOG_H
#define CPP00_DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal{
private:
	Brain *brain;
public:
	Dog();
	~Dog();
	void makeSound() const;
	Dog(const Dog &dog);
	Dog& operator= (const Dog &dog);

};


#endif //CPP00_DOG_H
