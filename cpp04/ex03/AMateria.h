//
// Created by shaurmyashka on 8/9/21.
//

#ifndef CPP00_AMATERIA_H
#define CPP00_AMATERIA_H

#include <iostream>
//#include "includes.h"
#include "ICharacter.h"


class AMateria {
protected:
	std::string type;
public:
	AMateria & operator=(const AMateria & aMateria);
	AMateria(const AMateria & aMateria);
	AMateria(std::string const & newType);
	std::string const & getType() const;
//Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual ~AMateria();
};


#endif //CPP00_AMATERIA_H
