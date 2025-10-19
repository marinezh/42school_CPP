#include "Fixed.hpp"

int main(void) {
	
	Fixed a;           // Default constructor
	Fixed b(a);        // Copy constructor
	Fixed c;
	c = b;             // Copy assignment
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
