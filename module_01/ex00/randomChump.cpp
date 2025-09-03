#include "Zombie.hpp"

void randomChump(const std::string& name) {
    Zombie z(name);   // stack object
    z.announce();     // auto-destroyed when function ends
}
