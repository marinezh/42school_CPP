#include "ClapTrap.hpp"

int main() {
	ClapTrap a("BeeBot");
	ClapTrap b("EnemyBot");

	a.attack("EnemyBot");
	a.attack("EnemyBot");
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("BeeBot");
	a.takeDamage(7);

	return 0;
}


