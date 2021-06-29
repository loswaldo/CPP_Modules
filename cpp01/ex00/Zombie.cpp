#include "Zombie.h"

Zombie::Zombie() {}

Zombie::Zombie(std::string zombie_name) : name(zombie_name){}

void Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}