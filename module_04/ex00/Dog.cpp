#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	std::cout << "[Dog] default-constructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "[Dog] copy-constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "[Dog] copy-assigned" << std::endl;
	if (this != &other) 
		Animal::operator=(other); // Copy base-class state safely
	return *this;
}

Dog::~Dog() {
	std::cout << "[Dog] destroyed" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "[Dog] Woof!" << std::endl;
}