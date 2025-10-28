#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "[Animal] default-constructed\n";
}

Animal::Animal(const std::string& t) : type(t) {
	std::cout << "[Animal] constructed as '" << type << "'\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "[Animal] copy-constructed from '" << other.type << "'\n";
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "[Animal] copy-assigned from '" << other.type << "'\n";
	if (this != &other) type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "[Animal] destroyed ('" << type << "')\n";
}

std::string Animal::getType() const { return type; }

void Animal::makeSound() const {
	std::cout << "[Animal] * generic animal noise *\n";
}