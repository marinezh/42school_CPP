#include "Bureaucrat.hpp"

static void testCreate(const std::string& name, int grade) {
	try {
		Bureaucrat b(name, grade);
		std::cout << "Created: " << b << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Failed to create (" << name << ", " << grade << "): "
				  << e.what() << std::endl;
	}
}

static void testIncDec() {
	try {
		Bureaucrat a("Alice", 2);
		std::cout << a << std::endl;
		a.incrementGrade(); // 2 -> 1
		std::cout << "After increment: " << a << std::endl;
		a.incrementGrade(); // should throw
		std::cout << "This line should not print" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Inc test exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b("Bob", 149);
		std::cout << b << std::endl;
		b.decrementGrade(); // 149 -> 150
		std::cout << "After decrement: " << b << std::endl;
		b.decrementGrade(); // should throw
		std::cout << "This line should not print" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Dec test exception: " << e.what() << std::endl;
	}
}

int main() {
	testCreate("OK_1", 1);
	testCreate("OK_150", 150);
	testCreate("BAD_0", 0);
	testCreate("BAD_151", 151);

	std::cout << "----" << std::endl;
	testIncDec();
	return 0;
}
