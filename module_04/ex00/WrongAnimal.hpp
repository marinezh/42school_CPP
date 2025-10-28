#ifndef WRONGWrongAnimal_HPP
#define WRONGWrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string type;

	public:
		WrongAnimal();
		//WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal(); // virtual dtor for safe polymorphic delete

		std::string getType() const;
		virtual void makeSound() const; // virtual so Dog/Cat override works

};

#endif