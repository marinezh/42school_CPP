#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "=== Polymorphic (correct) ===\n";
	const Animal* meta = new Animal();
	const Animal* ralf    = new Dog();
	const Animal* tom    = new Cat();

	std::cout <<ralf->getType() << std::endl;;
	std::cout <<tom->getType() << std::endl;
	meta->makeSound();
	ralf->makeSound();
	tom->makeSound();

	delete meta;
	delete ralf;
	delete tom;

	std::cout << "=== WRONG===\n";
	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout <<wrongCat->getType() << std::endl;
	metaWrong->makeSound();
	wrongCat->makeSound();
	
	delete metaWrong;
	delete wrongCat;
	
	return 0;
}