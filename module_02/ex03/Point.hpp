#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;
	
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& original);
		Point& operator=(const Point& original);
		~Point();
		
		const Fixed& getX() const;
		const Fixed& getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif