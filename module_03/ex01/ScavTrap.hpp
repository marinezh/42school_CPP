#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
	private:
		std::string _name;
		int 		_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();

		// Actions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void getData(void) const;
};
#endif