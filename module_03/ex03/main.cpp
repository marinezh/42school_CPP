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

	std::cout << "=== DiamondTrap Extended Tests ===" << std::endl;
	
	std::cout << "\n--- Test 1: Default constructor ---" << std::endl;
	DiamondTrap d1;
	d1.whoAmI();
	
	std::cout << "\n--- Test 2: Parameterized constructor ---" << std::endl;
	DiamondTrap d2("TestBot");
	d2.whoAmI();
	
	std::cout << "\n--- Test 3: Copy constructor ---" << std::endl;
	DiamondTrap d3(d2);
	d3.whoAmI();
	
	std::cout << "\n--- Test 4: Assignment operator ---" << std::endl;
	DiamondTrap d4;
	d4 = d2;
	d4.whoAmI();
	
	std::cout << "\n--- Test 5: All abilities ---" << std::endl;
	d2.attack("target");
	d2.takeDamage(50);
	d2.beRepaired(25);
	d2.guardGate();
	d2.highFivesGuys();

	std::cout << "\n--- End of Program ---" << std::endl;
	return 0;
}



