//
// Created by shaurmyashka on 8/9/21.
//

#ifndef CPP00_CURE_H
#define CPP00_CURE_H

#include "AMateria.h"

class Cure : public AMateria{
public:
	Cure();
	~Cure();
	AMateria * clone() const;
	void use(ICharacter &target);
};


#endif //CPP00_CURE_H
