//
// Created by shaurmyashka on 8/9/21.
//

#ifndef CPP00_CHARACTER_H
#define CPP00_CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter{
protected:
	std::string name;
	AMateria *inventory[4];
	int i; // index of Materia
public:
	Character(std::string newName);
	~Character();
	const std::string & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	Character(const Character & character);
	Character & operator=(const Character & character);
};


#endif //CPP00_CHARACTER_H
