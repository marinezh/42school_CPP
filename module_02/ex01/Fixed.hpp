#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		Fixed();							// Default constructor
		Fixed(const Fixed &other);			 // Copy constructor
		Fixed& operator=(const Fixed& other); // Copy assignment operator
		~Fixed(); 								// Copy constructor// Destructor

		// new constuctors
		Fixed(const int n);
		Fixed(const float f);

		//conversion functions
		float toFloat(void) const;
    	int   toInt(void) const;

		//getters/setters
		int  getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream& os, const Fixed& fixed);

#endif