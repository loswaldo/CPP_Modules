//
// Created by shaurmyashka on 7/8/21.
//

#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
	ClapTrap clapTrap("Pubup");
	ScavTrap scavTrap("Bibop");

	clapTrap.attack("Bupup");
	scavTrap.attack("Pipob");

	clapTrap.beRepaired(12);
	scavTrap.beRepaired(15);

	clapTrap.takeDamage(3);
	scavTrap.takeDamage(10);

	scavTrap.guardGate();
}
