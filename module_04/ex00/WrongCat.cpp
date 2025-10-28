#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "[WrongCat] default-constructed\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "[WrongCat] copy-constructed\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "[WrongCat] copy-assigned\n";
	if (this != &other) WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "[WrongCat] destroyed\n";
}

void WrongCat::makeSound() const {
	std::cout << "[WrongCat] Meee-ow? (but you won't hear me via base ptr)\n";
}