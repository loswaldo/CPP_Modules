//
// Created by shaurmyashka on 8/9/21.
//

#include "Character.h"

const std::string &Character::getName() const {
	return name;

}

Character::Character(std::string newName) : name(newName), i(0){
	name = newName;
	for (int counter = 0; counter < 4; counter++)
	{
		inventory[counter] = NULL;
	}
}

Character::~Character() {

	for (int counter = 0; counter < 4; counter++)
	{
		if (inventory[counter] != NULL)
		{
			delete inventory[counter];
		}
		counter++;
	}
}

void Character::equip(AMateria *m) {
	if (i < 4)
	{
		inventory[i] = m;
		i++;
	}
	else
		std::cout << "You have max materia in inventory :(" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 4 && idx >= 0)
	{
		if (inventory[idx] != NULL)
			inventory[idx] = NULL;
		else
			std::cout << "You can't unequip empty slot" << std::endl;
	}
	else
		std::cout << "Error: wrong index" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 4 && idx >= 0)
	{
		if ( inventory[idx] != NULL)
		{
			inventory[idx]->use(target);
			inventory[idx] = NULL;
		}
		else
			std::cout << "You can't use empty slot" << std::endl;
	}
	else
		std::cout << "Error: wrong index" << std::endl;
}
