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

void ClapTrap::getData(void) const {
	std::cout <<"Name - "<< _name << std::endl;
	std::cout <<"hitpoits - "<< _hitPoints << std::endl;
	std::cout <<"energyPoints - "<< _energyPoints << std::endl;
	std::cout <<"attackDamage - "<< _attackDamage << std::endl;
	
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

void ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	if (_hitPoints < 0) _hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount
			  << " damage! Remaining HP: " << _hitPoints << std::endl;
}
