//
// Created by shaurmyashka on 8/9/21.
//

#ifndef CPP00_AMATERIA_H
#define CPP00_AMATERIA_H

#include <iostream>
#include "ICharacter.h"


class AMateria {
protected:
	std::string type;
public:
	AMateria(std::string const & newType);
	std::string const & getType() const;
//Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};


#endif //CPP00_AMATERIA_H
