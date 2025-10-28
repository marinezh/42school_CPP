#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "=== Polymorphic (correct) ===\n";
	const Animal* meta = new Animal();
	const Animal* Ralf    = new Dog();
	const Animal* Tom    = new Cat();

	std::cout << Ralf->getType() << "\n";
	std::cout << Tom->getType() << "\n";
	Ralf->makeSound(); // Cat sound
	Tom->makeSound(); // Dog sound
	meta->makeSound(); // Animal generic

	delete meta;
	delete Ralf;
	delete Tom;

	std::cout << "\n=== Non-polymorphic (wrong) ===\n";
	WrongCat wc;                 // stack object, no heap allocation
	const WrongAnimal* w = &wc;  // upcast to base
	std::cout << w->getType() << "\n";
	w->makeSound();              // calls WrongAnimal::makeSound() (not WrongCat)

	// std::cout << "\n=== Non-polymorphic (wrong) ===\n";
	// const WrongAnimal* w = new WrongCat();
	// std::cout << w->getType() << "\n";
	// w->makeSound(); // Calls WrongAnimal::makeSound (NOT WrongCat), by design
	// delete w; // dtor not virtual -> example of why this is dangerous in real code

	return 0;
}