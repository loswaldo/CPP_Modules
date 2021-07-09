//
// Created by shaurmyashka on 7/8/21.
//

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	ClapTrap clapTrap("Pubup");
	ScavTrap scavTrap("Bibop");
	FragTrap fragTrap("Pupup");

	clapTrap.attack("Bupup");
	scavTrap.attack("Pipob");
	fragTrap.attack("Pipip");

	clapTrap.beRepaired(12);
	scavTrap.beRepaired(15);
	fragTrap.beRepaired(30);

	clapTrap.takeDamage(3);
	scavTrap.takeDamage(10);
	fragTrap.takeDamage(30);

	scavTrap.guardGate();
	fragTrap.highFivesGuys();
}
