#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const int N = 4;
	AAnimal* animals[N];

	for (int i = 0; i < N; i++) {
		if (i < N / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < N; i++) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < N; i++) {
		delete animals[i];
	}

	std::cout << "\033[35mCreating animals\033[0m" << std::endl;
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << "\n\033[35mMaking sounds\033[0m" << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n\033[36mChecking types\033[0m" << std::endl;
	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;

	std::cout << "\n\033[31mDeleting animals\033[0m" << std::endl;
	delete dog;
	delete cat;

	return 0;
}