#include "DiamondTrap.hpp"

int main() {
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
    
    std::cout << "\n--- End of tests ---" << std::endl;
    return 0;
}
