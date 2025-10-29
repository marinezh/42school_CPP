#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n=== Array creation ===\n";
	const Animal *animals[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}


	std::cout << "\n=== Deep copy test ===\n";
	Dog basic;
	basic.setIdea(0, "Chase the mailman!");
	basic.setIdea(1, "Eat the mailman!");

	Dog copy = basic;

	std::cout << "=== After modifying basic ===\n";

	basic.showIdea(0);
	basic.showIdea(1);

	copy.showIdea(0);
	copy.showIdea(1);

	copy.setIdea(0, "Chase the cat");
	copy.setIdea(1, "Play with cat");

	copy.showIdea(0);
	copy.showIdea(1);

	delete dog;
	delete cat;

	return 0;
}