//
// Created by shaurmyashka on 7/14/21.
//

#ifndef CPP00_DOG_H
#define CPP00_DOG_H

#include "Animal.h"

class Dog : public Animal{
public:
	Dog();
	~Dog();
	void makeSound() const;

};


#endif //CPP00_DOG_H
