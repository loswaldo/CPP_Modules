//
// Created by shaurmyashka on 7/14/21.
//

#ifndef CPP00_ANIMAL_H
#define CPP00_ANIMAL_H

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal(std::string type = "");
	~Animal();
	virtual void makeSound() const;
	std::string getType() const;
	Animal& operator= (const Animal &animal);
	Animal(const Animal &animal);
};


#endif //CPP00_ANIMAL_H
