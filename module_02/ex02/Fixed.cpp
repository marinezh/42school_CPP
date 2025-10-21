#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& original) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

// Int constructor
Fixed::Fixed(const int n) {
	// std::cout << "Int constructor called" << std::endl;
	_value = n << _fractionalBits; // multiply by 256
}

// Float constructor
Fixed::Fixed(const float f) {
	// std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _fractionalBits));
}

// Destructor
Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

// Copy assignment
Fixed& Fixed::operator=(const Fixed& original) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		_value = original._value;
	return *this;
}

// Getters/setters
int Fixed::getRawBits(void) const { return _value; }
void Fixed::setRawBits(int const raw) { _value = raw; }

// Conversion
float Fixed::toFloat(void) const {
	return (float)_value / (1 << _fractionalBits);
}
int Fixed::toInt(void) const {
	return _value >> _fractionalBits; // devision by 256
}

// Comparison operators
bool Fixed::operator>(const Fixed& rhs) const { return _value > rhs._value; }
bool Fixed::operator<(const Fixed& rhs) const { return _value < rhs._value; }
bool Fixed::operator>=(const Fixed& rhs) const { return _value >= rhs._value; }
bool Fixed::operator<=(const Fixed& rhs) const { return _value <= rhs._value; }
bool Fixed::operator==(const Fixed& rhs) const { return _value == rhs._value; }
bool Fixed::operator!=(const Fixed& rhs) const { return _value != rhs._value; }

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}
Fixed Fixed::operator-(const Fixed& rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}
Fixed Fixed::operator*(const Fixed& rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}
Fixed Fixed::operator/(const Fixed& rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}
// Increment / Decrement
Fixed& Fixed::operator++() {
	++_value;
	return *this;
}
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++_value;
	return tmp;
}
Fixed& Fixed::operator--() {
	--_value;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--_value;
	return tmp;
}

// Static min/max
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b ? a : b);
}
// Operator <<
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
