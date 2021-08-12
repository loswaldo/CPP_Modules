//
// Created by shaurmyashka on 8/9/21.
//

#ifndef CPP00_IMATERIASOURCE_H
#define CPP00_IMATERIASOURCE_H

#include <iostream>
#include "AMateria.h"


class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};


#endif //CPP00_IMATERIASOURCE_H
