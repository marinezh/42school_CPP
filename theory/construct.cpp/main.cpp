#include <iostream>
#include <string>

class Demo {
public:
	Demo(std::string name) : _name(name) {
		std::cout << "Constructor called\n";
		std::cout << "  Parameter name value: " << name << "\n";
		std::cout << "  Member   _name value: " << _name << "\n";
		std::cout << "  Address of parameter name: " << &name << "\n";
		std::cout << "  Address of member    _name: " << &_name << "\n";
	}
	~Demo() {
		std::cout << "Destructor called for " << _name << std::endl;
	}
private:
	std::string _name;
};

int main() {
	std::cout << "Start main\n";

	Demo a("First");
	{
		Demo b("Second");
	} // <-- здесь деструктор вызовется для b

	std::cout << "End main\n";
	return 0;
} // <-- здесь деструктор вызовется для a
