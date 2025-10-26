#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	std::cout << "--- ClapTrap ---" << std::endl;
	ClapTrap c("BeeBot");
	c.attack("enemy");
	c.takeDamage(3);
	c.beRepaired(2);

	std::cout << "\n--- ScavTrap ---" << std::endl;
	ScavTrap s("Guardian");
	s.attack("enemy");
	s.guardGate();

	std::cout << "\n--- FragTrap ---" << std::endl;
	FragTrap f("Boomer");
	f.attack("enemy");
	f.highFivesGuys();

	std::cout << "\n--- DiamondTrap ---" << std::endl;
	DiamondTrap d("Diamond");
	d.whoAmI();
	d.attack("enemy");
	d.guardGate();
	d.highFivesGuys();

	std::cout << "\n--- End of Program ---" << std::endl;
	return 0;
}



