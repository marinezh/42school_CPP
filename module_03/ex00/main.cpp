#include "ClapTrap.hpp"

int main() {
	ClapTrap a("BeBot");
	ClapTrap b("EnemyBot");

	a.attack("EnemyBot");
	a.getData();
	b.getData();
	std::cout <<"////////////////"<< std::endl;
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("BeeBot");
	a.takeDamage(7);

	return 0;
}


