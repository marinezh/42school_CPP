#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal(); // virtual dtor for safe polymorphic delete

		std::string getType() const;
		virtual void makeSound() const; // virtual so Dog/Cat override works

};

#endif