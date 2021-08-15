//
// Created by shaurmyashka on 8/9/21.
//

#include "MateriaSource.h"

void MateriaSource::learnMateria(AMateria *m) {
	if (idx < 4)
	{
		array[idx] = m;
		idx++;
	} else
		std::cout << "You have max materia" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++)
	{
		if (array[i]->getType() == type)
		{
			return array[i]->clone();
		}
	}
	return NULL;
}

MateriaSource::MateriaSource() {
	idx = 0;
	for (int counter = 0; counter < 4; counter++)
	{
		array[counter] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this != &materiaSource)
	{
		for (int i = 0; i < 4; i++)
		{
			delete array[i];
			array[i] = materiaSource.array[i] ? materiaSource.array[i]->clone() : NULL;
		}
	}
	idx = materiaSource.idx;
	return *this;
}
