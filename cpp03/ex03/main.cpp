//
// Created by shaurmyashka on 7/8/21.
//

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main()
{
	ClapTrap clapTrap("Pubup");
	ScavTrap scavTrap("Bibop");
	FragTrap fragTrap("Pupup");
	DiamondTrap diamondTrap("Buba");

	clapTrap.attack("Bupup");
	scavTrap.attack("Pipob");
	fragTrap.attack("Pipip");
	diamondTrap.attack("Biba");

	clapTrap.beRepaired(12);
	scavTrap.beRepaired(15);
	fragTrap.beRepaired(30);
	diamondTrap.beRepaired(50);

	clapTrap.takeDamage(3);
	scavTrap.takeDamage(10);
	fragTrap.takeDamage(30);
	diamondTrap.takeDamage(15);

	scavTrap.guardGate();
	fragTrap.highFivesGuys();
	diamondTrap.whoAmI();
}
