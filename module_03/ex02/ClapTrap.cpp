#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << "Default ClapTrap constructed: " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << "ClapTrap constructed: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "Copy constructor called for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "Copy assignment called for " << _name << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructed: " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can’t attack." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	_hitPoints -= amount;

	if (_hitPoints <= 0) {
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " took " << amount
				  << " points of damage and now it is dead!" << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " took " << amount
				  << " points of damage! Remaining hit points: " << _hitPoints
				  << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can’t repair itself." << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repairs itself by " << amount
			  << " points! HP now: " << _hitPoints << std::endl;
}
