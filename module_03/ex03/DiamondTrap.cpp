#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
	: ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default") {
	_hitPoints = 100;     // FragTrap hit points
	_energyPoints = 50;   // ScavTrap energy points  
	_attackDamage = 30;   // FragTrap attack damage
	std::cout << "Default DiamondTrap constructed: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
	_hitPoints = 100;     // FragTrap hit points (100)
	_energyPoints = 50;   // ScavTrap energy points (50)
	_attackDamage = 30;   // FragTrap attack damage (30)
	std::cout << "DiamondTrap constructed: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), FragTrap(other), ScavTrap(other) {
	*this = other;
	std::cout << "DiamondTrap copy constructed: " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		_name = other._name;
		ClapTrap::_name = other.ClapTrap::_name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "DiamondTrap copy assigned: " << _name << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructed: " << _name << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << _name
			  << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
