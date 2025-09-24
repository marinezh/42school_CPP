#include "Zombie.hpp"

void randomChump(const std::string& name) {
	Zombie zombie(name);	// stack object
	zombie.announce();		// auto-destroyed when function ends

}
