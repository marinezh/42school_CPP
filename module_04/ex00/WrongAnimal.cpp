#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "[WrongAnimal] default-constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "[WrongAnimal] copy-constructed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "[WrongAnimal] copy-assigned" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	 std::cout << "[WrongAnimal] destroyed ('" << type << "')" << std::endl;
}

std::string WrongAnimal::getType() const { return type; }

void WrongAnimal::makeSound() const {
	std::cout << "[WrongAnimal] * wrong generic noise *" << std::endl;
}