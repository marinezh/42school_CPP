#include "Point.hpp"

// static Fixed sign(Point const& p1, Point const& p2, Point const& p3) {
// 	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) -
// 		   (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
// }

// bool bsp(Point const a, Point const b, Point const c, Point const point) {
// 	bool b1 = sign(point, a, b) < 0;
// 	bool b2 = sign(point, b, c) < 0;
// 	bool b3 = sign(point, c, a) < 0;
	
// 	std::cout << "sign(point, a, b): " << sign(point, a, b) << std::endl;
// 	std::cout << "sign(point, b, c): " << sign(point, b, c) << std::endl;
// 	std::cout << "sign(point, c, a): " << sign(point, c, a) << std::endl;

// 	return ((b1 == b2) && (b2 == b3));
// }

static Fixed area2(Point const& a, Point const& b, Point const& c) {
	// std::cout << "AAA " << a.getX() <<"-" << a.getY() << std::endl;
	// std::cout << "BBB " << b.getX() <<"-" << b.getY() << std::endl;
	// std::cout << "CCC " << c.getX() <<"-" << c.getY() << std::endl;
    return ((a.getX() * (b.getY() - c.getY())) +
            (b.getX() * (c.getY() - a.getY())) +
            (c.getX() * (a.getY() - b.getY())));
}

bool bsp(Point const a, Point const b, Point const c, Point const p) {
    Fixed A  = area2(a, b, c);
    Fixed A1 = area2(p, b, c);
    Fixed A2 = area2(a, p, c);
    Fixed A3 = area2(a, b, p);

	std::cout << "area2(point, a, b): " << area2(p, a, b) << std::endl;
	std::cout << "area2(point, b, c): " << area2(p, b, c) << std::endl;
	std::cout << "area2(point, c, a): " << area2(p, c, a) << std::endl;

    if (A1 == 0 || A2 == 0 || A3 == 0)
        return false;

    // Check if all have same sign (all >0 or all <0)
    if ((A > 0 && A1 > 0 && A2 > 0 && A3 > 0) ||
        (A < 0 && A1 < 0 && A2 < 0 && A3 < 0))
        return true;

    return false;
}