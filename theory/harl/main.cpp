#include <iostream>
#include <string>

class Harl {
public:
	void debug()   { std::cout << "Debug called\n"; }
	void info()    { std::cout << "Info called\n"; }
	void warning() { std::cout << "Warning called\n"; }
	void error()   { std::cout << "Error called\n"; }

	void complain(std::string level) {
		// массив указателей на методы
		void (Harl::*funcs[])() = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
		};

		std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

		for (int i = 0; i < 4; i++) {
			if (levels[i] == level) {
				// Вызов через this (внутри класса)
				std::cout << "[this->*] ";
				(this->*funcs[i])();
				return;
			}
		}
	}
};

int main() {
	Harl h;

	// 1. Вызов внутри метода через this
	h.complain("DEBUG");

	// 2. Вызов через объект
	void (Harl::*func)() = &Harl::info;
	std::cout << "[obj.*] ";
	(h.*func)();   // указываем объект h

	// 3. Вызов через указатель на объект
	Harl* ptr = &h;
	func = &Harl::warning;
	std::cout << "[ptr->*] ";
	(ptr->*func)(); // указываем указатель ptr

	return 0;
}
