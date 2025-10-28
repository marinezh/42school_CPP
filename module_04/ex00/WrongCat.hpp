#ifndef WRONGWrongCat_HPP
#define WRONGWrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat();

		virtual void makeSound() const;  // attempts to override, but base isn't virtual
};

#endif