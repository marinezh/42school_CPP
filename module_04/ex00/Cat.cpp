#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "[Cat] default-constructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "[Cat] copy-constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "[Cat] copy-assigned" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat() {
	std::cout << "[Cat] destroyed" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "[Cat] Meow!" << std::endl;
}