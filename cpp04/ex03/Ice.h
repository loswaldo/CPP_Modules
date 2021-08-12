//
// Created by shaurmyashka on 8/9/21.
//

#ifndef CPP00_ICE_H
#define CPP00_ICE_H

#include "AMateria.h"

class Ice : public AMateria{
public:
	Ice();
	~Ice();
	AMateria * clone() const;
	void use(ICharacter &target);
};


#endif //CPP00_ICE_H
