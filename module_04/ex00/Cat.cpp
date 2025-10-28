#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "[Cat] default-constructed\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "[Cat] copy-constructed\n";
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "[Cat] copy-assigned\n";
	if (this != &other) Animal::operator=(other);
	return *this;
}

Cat::~Cat() {
	std::cout << "[Cat] destroyed\n";
}

void Cat::makeSound() const {
	std::cout << "[Cat] Woof!\n";
}