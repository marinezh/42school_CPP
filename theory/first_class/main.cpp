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
	Dog d("Rex");
	d.bark();
	return 0;
}