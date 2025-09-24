#include <iostream>

class Example {
private:
	int* data;

public:
	// Default constructor
	Example() : data(new int(0)) {
		std::cout << "Default constructor\n";
	}

	// Copy constructor
	Example(const Example& other) : data(new int(*other.data)) {
		std::cout << "Copy constructor\n";
	}

	// Copy assignment operator
	Example& operator=(const Example& other) {
		if (this != &other) {
			*data = *other.data; // copy the value
		}
		std::cout << "Copy assignment operator\n";
		return *this;
	}

	// Destructor
	~Example() {
		delete data;
		std::cout << "Destructor\n";
	}
};


int main() {
	std::cout << "---- Create a (default constructor) ----" << std::endl;
	Example a;   // Default constructor

	std::cout << "\n---- Create b as a copy of a (copy constructor) ----" << std::endl;
	Example b(a);   // Copy constructor

	std::cout << "\n---- Create c (default) and assign b to c (copy assignment) ----" << std::endl;
	Example c;   // Default constructor
	c = b;       // Copy assignment operator

	std::cout << "\n---- End of main, destructors will be called ----" << std::endl;
	return 0;
}