#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& original) {
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

// Copy assignment
Fixed& Fixed::operator=(const Fixed& original) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		_value = original._value;
	return *this;
}

// Int constructor
Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	_value = n << _fractionalBits; // multiply by 256
}

// Float constructor
Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _fractionalBits));
}


// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// Get/set
int Fixed::getRawBits(void) const {
	return _value;
}
void Fixed::setRawBits(int const raw) {
	_value = raw;
}

// Conversion
float Fixed::toFloat(void) const {
	return (float)_value / (1 << _fractionalBits);
}
int Fixed::toInt(void) const {
	return _value >> _fractionalBits; // devision by 256
}

// Operator <<
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
