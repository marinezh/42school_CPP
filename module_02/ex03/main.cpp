#include "Fixed.hpp"
#include <iostream>

void test(const Fixed &a, const Fixed &b)
{
	std::cout << " > a = " << a;
	std::cout << "; b = " << b << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << std::endl;
}

int main(void)
{

	/* SUBJECT EXAMPLE */

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	/* MY TESTS */

	Fixed const aa(100);
	Fixed const bb(-10);
	test(aa, bb);
	Fixed const c(42.42f);
	Fixed const d(42.1f);
	test(c, d);
	Fixed const e(0);
	Fixed const f(0.1f);
	test(e, f);
	Fixed const g(-10.005f);
	Fixed const h(-10.5f);
	test(g, h);
	Fixed const i(-10.0f);
	Fixed const j(-10);
	test(i, j);
	Fixed const k(-10);
	Fixed const l(10);
	test(k, l);
	Fixed const m(4);
	Fixed const n(2);
	test(m, n);

	return 0;
}

// #include <iostream>
// #include "Fixed.hpp"

// int main(void) {
//     Fixed a;
//     Fixed const b(Fixed(5.05f) * Fixed(2));

//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;

//     std::cout << b << std::endl;
//     std::cout << Fixed::max(a, b) << std::endl;

//     return 0;
// }
