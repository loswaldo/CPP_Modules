//
// Created by shaurmyashka on 7/14/21.
//

#ifndef CPP00_CAT_H
#define CPP00_CAT_H

#include "Animal.h"

class Cat : public Animal{
public:
	void makeSound() const;
	Cat();
	~Cat();
};


#endif //CPP00_CAT_H
