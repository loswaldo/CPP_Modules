#include "Zombie.h"

int main()
{
	Zombie *first;
	Zombie *second;
	second= newZombie("Pup");
	first = newZombie("sjdiksl");
	first->announce();
	second->announce();
	randomChump("gg");
	delete first;
	delete second;
}