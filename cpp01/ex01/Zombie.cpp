#include "Zombie.h"

Zombie::Zombie() {}
Zombie::~Zombie() {
	std::cout << "i\' dead dead" << std::endl;
}


Zombie::Zombie(std::string zombie_name) : name(zombie_name){}

void Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(Zombie *pZombie, std::string zombieName) : name(zombieName) {
	pZombie = new Zombie();
}

void Zombie::setName(std::string new_name) {
	name = new_name;
}
