#include "Zombie.hpp"

Zombie::Zombie(const std::string& zombieName) : name(zombieName){};

Zombie::~Zombie(void){
	std::cout << "Zombie " << name << " is being destroyed... :(" << std::endl;
};

void Zombie::announce(void) const{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}