#include "Zombie.hpp"

Zombie::Zombie(void){};

Zombie::Zombie(const std::string& zombieName) : name(zombieName){};

Zombie::~Zombie(void){
	std::cout << "Zombie " << name << " is being destroyed... :(" << std::endl;
};

void Zombie::setName(const std::string& newName)
{
	name = newName;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}