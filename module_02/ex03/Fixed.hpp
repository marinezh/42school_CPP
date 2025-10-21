#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		Fixed();								// Default constructor
		Fixed(const Fixed &original);			 // Copy constructor
		Fixed& operator=(const Fixed& original); // Copy assignment operator
		~Fixed(); 								// Copy constructor// Destructor

		// new constuctors fot int and float
		Fixed(const int n);
		Fixed(const float f);

		//getters/setters
		int  getRawBits(void) const;
		void setRawBits(int const raw);

		//conversion functions
		float toFloat(void) const;
		int   toInt(void) const;

		//Comparison operators
		bool operator>(const Fixed& rhs) const;
		bool operator<(const Fixed& rhs) const;
		bool operator>=(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator==(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;

		// Arithmetic operators
		Fixed operator+(const Fixed& rhs) const;
		Fixed operator-(const Fixed& rhs) const;
		Fixed operator*(const Fixed& rhs) const;
		Fixed operator/(const Fixed& rhs) const;

		// Increment / Decrement
		Fixed& operator++();		// pre-increment
		Fixed  operator++(int);		// post-increment
		Fixed& operator--();		// pre-decrement
		Fixed  operator--(int);		// post-decrement

		// Static min/max
		static Fixed&       min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed&       max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream& os, const Fixed& fixed);

#endif