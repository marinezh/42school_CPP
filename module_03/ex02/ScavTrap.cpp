#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScav") {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ScavTrap constructed: " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructed: " << _name << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructed: " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assigned: " << _name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructed: " << _name << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can’t attack." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " fiercely attacks " << target
			  << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	if (_hitPoints <= 0)
		std::cout << "ScavTrap " << _name << " can't be in Gate keeper mode, it's dead...!" << std::endl;
	else 
		std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}