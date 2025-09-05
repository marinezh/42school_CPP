#include <iostream>

class Dog {

private:
	std::string name;

public:
	Dog(std::string n) : name(n) {
		std::cout << "Dog " << name << " is born!" << std::endl;
	}

	~Dog(){
		 std::cout << "Dog " << name << " has gone away..." << std::endl;
	}

	void bark(){
		std::cout << name << " says: Woof!" << std::endl;
	}
};

int main(){
	Dog myDog("Rex");
	Dog anotherDog("Buddy");

	myDog.bark();       // Rex says: Woof!
	anotherDog.bark();  // Buddy says: Woof!
	return 0;
}

// public
// Everything marked as public is visible and accessible from anywhere (inside the class, outside the class, in main, etc.).
// Typically, you put the methods (functions) here that you want users of the class to call.

// private
// Everything marked as private is hidden from the outside. Only the class itself can access it.
// Usually, you put the data members (variables) here so they cannot be changed directly from outside the class.

// protected (you’ll meet it later when studying inheritance)
// Works like private, but derived (child) classes can also access it.

// Why this is useful

// Encapsulation → You hide the internal details of how the class works. Users only see the interface (the public part).

// Safety → Prevents outside code from accidentally changing or breaking the internal state.

// Clean interface → Users of the class don’t need to know how it works internally, only how to use it.

// 👉 In short:

// private = hidden inside.

// public = open to everyone.

// protected = for the class itself and its children.