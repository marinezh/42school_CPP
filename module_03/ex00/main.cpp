#include "ClapTrap.hpp"

int main() {
	ClapTrap a("MarinaBot");
	ClapTrap b("EnemyBot");

	a.attack("EnemyBot");
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("MarinaBot");
	a.takeDamage(7);

	return 0;
}


