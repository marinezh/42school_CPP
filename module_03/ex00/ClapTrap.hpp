#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string _name;
		int 		_hitPoints; //health
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		// Actions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif