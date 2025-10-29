#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	type = "Dog";
	brain = new Brain();
	std::cout << "[Dog] default-constructed" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other) {
	std::cout << "[Dog] copy-constructed" << std::endl;
	brain = new Brain(*other.brain); // deep copy!
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "[Dog] copy-assigned" << std::endl;
	if (this != &other) {
		AAnimal::operator=(other); // Copy base-class state safely
		*brain = *other.brain; // deep copy of contents
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "[Dog] destroyed" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "[Dog] Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea) {
	brain->setIdea(index, idea);
}

void Dog::showIdea(int index) const {
	std::cout << "Dog idea[" << index << "]: " << brain->getIdea(index) << std::endl;
}