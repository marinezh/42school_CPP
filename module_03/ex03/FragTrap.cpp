#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFrag") {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default FragTrap constructed: " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructed: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructed: " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	ClapTrap::operator=(other);
	std::cout << "FragTrap copy assigned: " << _name << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructed: " << _name << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "FragTrap " << _name << " can’t attack." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " launches a powerful attack on " << target
			  << ", dealing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " requests a high five! ✋" << std::endl;
}