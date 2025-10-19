#include <iostream>
#include <string>

class Student {
private:
	int         id;
	std::string name;
	float       gpa;

public:
	// 🧱 Default constructor
	Student()
		: id(0), name("Unknown"), gpa(0.0f)
	{
		std::cout << "Default constructor called" << std::endl;
	}

	// 📋 Custom constructor
	Student(int newId, std::string newName, float newGpa)
		: id(newId), name(newName), gpa(newGpa)
	{
		std::cout << "Parameterized constructor called" << std::endl;
	}

	// 🧩 Copy constructor
	Student(const Student& other)
		: id(other.id), name(other.name), gpa(other.gpa)
	{
		std::cout << "Copy constructor called" << std::endl;
	}

	// 🔁 Copy assignment operator
	Student& operator=(const Student& other) {
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &other) {
			id = other.id;
			name = other.name;
			gpa = other.gpa;
		}
		return *this;
	}

	// 💣 Destructor
	~Student() {
		std::cout << "Destructor called for " << name << std::endl;
	}

	// 🧠 Utility function
	void print() const {
		std::cout << "ID: " << id
				  << ", Name: " << name
				  << ", GPA: " << gpa
				  << std::endl;
	}
};

int main() {
	std::cout << "--- Default constructor ---" << std::endl;
	Student a;
	a.print();

	std::cout << "\n--- Parameterized constructor ---" << std::endl;
	Student b(42, "Marina", 4.0f);
	b.print();

	std::cout << "\n--- Copy constructor ---" << std::endl;
	Student c(b);
	c.print();

	std::cout << "\n--- Copy assignment ---" << std::endl;
	a = c;
	a.print();

	std::cout << "\n--- End of main ---" << std::endl;
}
