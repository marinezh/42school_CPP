#include "Point.hpp"

Point::Point() : _x(0), _y(0){
	// std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Point::Point(const Point& original) : _x(original._x), _y(original._y){
	// std::cout << "Copy constructor called" << std::endl;
}

// Destructor
Point::~Point() {
	// std::cout << "Destructor called" << std::endl;
}

// assignment operator (cannot actually change const members)
Point& Point::operator=(const Point& original) {
	(void)original;
	return *this;
}

const Fixed& Point::getX() const { return _x; }
const Fixed& Point::getY() const { return _y; }