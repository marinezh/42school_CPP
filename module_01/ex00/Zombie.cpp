#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("noname") {}

Zombie::Zombie(const std::string& name) : _name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie \"" << _name << "\" is destroyed.\n";
}

void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string& name) {
    _name = name;
}
