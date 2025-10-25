#include "ClapTrap.hpp"

int main() {
	ScavTrap st("Serena");

	std::cout << "--- Actions ---" << std::endl;
	st.attack("enemy");
	st.takeDamage(30);
	st.beRepaired(20);
	st.guardGate();

	std::cout << "--- End of program ---" << std::endl;
	return 0;

	return 0;
}


