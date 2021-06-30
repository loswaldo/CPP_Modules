#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde  = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		horde[i] = /*new*/ Zombie(name);
		horde[i].announce();
	}
	return (horde);
}
