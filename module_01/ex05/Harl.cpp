#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
			  << "I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. "
			  << "You didn’t put enough bacon in my burger! If you did, "
			  << "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. "
			  << "I’ve been coming for years whereas you started working here since last month."
			  << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(std::string level) {
	// Array of function pointers
	void (Harl::*funcs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*funcs[i])();  // call member function pointer
			return;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}

//So funcs[0] points to Harl::debug, funcs[1] → Harl::info, etc.
// This is a lookup table:

// levels[i] matches the string the user might pass ("DEBUG", "INFO", …).

// funcs[i] is the function to call if levels[i] matches.

// So they are aligned:

// levels[0] == "DEBUG" → call funcs[0] == &Harl::debug

// levels[1] == "INFO" → call funcs[1] == &Harl::info

// etc.
// Iterate over all 4 possible levels.

// If the string level matches one of them (DEBUG, INFO, …):

// Use (this->*funcs[i])(); to call the corresponding method.