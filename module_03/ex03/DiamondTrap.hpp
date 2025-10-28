#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string _name;   // DiamondTrap's own name

public:
	// Orthodox Canonical Form
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();

	void whoAmI();
	using ScavTrap::attack;  // use ScavTrap's attack()
	void printData() {
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "DiamondTrap name: " << _name << std::endl;
		std::cout << "ClapTrap name:    " << ClapTrap::_name << std::endl;
		std::cout << "Hit Points:       " << _hitPoints << std::endl;
		std::cout << "Energy Points:    " << _energyPoints << std::endl;
		std::cout << "Attack Damage:    " << _attackDamage << std::endl;
		std::cout << "----------------------------------------" << std::endl;
	}
};

#endif
