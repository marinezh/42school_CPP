#include "Point.hpp"

int main(){

	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	Point aa(0, 0);
	Point bb(0, 10);
	Point cc(10, 0);

	Point p1(3, 3);
	Point p2(13, 13);
	
	std::cout << "p1 inside? " << bsp(a, b, c, p1) << std::endl; 
	std::cout << "p1 inside? " << bsp(aa, bb, cc, p1) << std::endl; 
	std::cout << "p1 inside? " << bsp(a, b, c, p2) << std::endl; 
	std::cout << "p1 inside? " << bsp(aa, bb, cc, p2) << std::endl; 
}
