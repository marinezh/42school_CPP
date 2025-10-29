#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain* brain; // dynamic allocation
	
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();

		virtual void makeSound() const;
		void setIdea(int index, const std::string& idea);
		void showIdea(int index) const;
};

#endif