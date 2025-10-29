#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	brain = new Brain();
	std::cout << "[Cat] default-constructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "[Cat] copy-constructed" << std::endl;
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "[Cat] copy-assigned" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "[Cat] destroyed" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "[Cat] Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) {
	brain->setIdea(index, idea);
}

void Cat::showIdea(int index) const {
	std::cout << "Cat idea[" << index << "]: " << brain->getIdea(index) << std::endl;
}