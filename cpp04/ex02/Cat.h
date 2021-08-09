//
// Created by shaurmyashka on 7/14/21.
//

#ifndef CPP00_CAT_H
#define CPP00_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal{
private:
	Brain *brain;
public:
	void makeSound() const;
	Cat();
	~Cat();
	Cat(const Cat &cat);
	Cat& operator= (const Cat &cat);
};


#endif //CPP00_CAT_H
