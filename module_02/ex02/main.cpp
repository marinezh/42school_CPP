#include "Fixed.hpp"
#include <iostream>

void test(const Fixed &a, const Fixed &b)
{
	std::cout << " --> a = " << a;
	std::cout << "; b = " << b << " <--" << std::endl;

	std::cout << "Comparison operators" << std::endl;
	std::cout <<"a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "Arithmetic operators" << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "---> ************* <---" << std::endl;
}

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed const c(20);
	Fixed const d(-10);
	test(c, d);
	Fixed const e(42.42f);
	Fixed const f(42.41f);
	test(e, f);
	Fixed const g(-5.05f);
	Fixed const h(-5.5f);
	test(g, h);
	Fixed const i(-10.0f);
	Fixed const j(-10);
	test(i, j);
	Fixed const k(-10);
	Fixed const l(10);
	test(k, l);
	Fixed const m(3);
	Fixed const n(2);
	test(m, n);

	return 0;
}

