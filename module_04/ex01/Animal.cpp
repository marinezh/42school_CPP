#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "[Animal] default-constructed" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "[Animal] copy-constructed from '" << other.type << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "[Animal] copy-assigned from '" << other.type << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal() {
		std::cout << "[WrongAnimal] destroyed ('" << type << "')" << std::endl;
}

std::string Animal::getType() const { return type; }

void Animal::makeSound() const {
	std::cout << "[Animal] * generic animal noise *" << std::endl;
}