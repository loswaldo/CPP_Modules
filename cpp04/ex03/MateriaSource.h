//
// Created by shaurmyashka on 8/9/21.
//

#ifndef CPP00_MATERIASOURCE_H
#define CPP00_MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource: public IMateriaSource{
	AMateria* array[4];
	int idx;
public:
	MateriaSource(const MateriaSource & materiaSource);
	MateriaSource & operator=(const MateriaSource & materiaSource);
	MateriaSource();
	~MateriaSource() {};
	void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};


#endif //CPP00_MATERIASOURCE_H
