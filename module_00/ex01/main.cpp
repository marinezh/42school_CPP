#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
	PhoneBook pb;
	std::string command;
	bool success;

	std::cout << "=====================================\n";
	std::cout << "        📖  MY AWESOME PHONEBOOK      \n";
	std::cout << "=====================================\n";

	while (true) {
		std::cout << "Enter command (ADD | SEARCH | EXIT): ";
		if (!std::getline(std::cin, command))
			break;

		success = false;

		if (command == "ADD") {
			pb.addContact();
			success = true;
		}
		else if (command == "SEARCH") {
			success = pb.searchContact();
		}
		else if (command == "EXIT") {
			break;
		}
		else {
			std::cout << "Invalid command" << std::endl;
		}

		if (success) {
			std::cout << "=====================================\n";
			std::cout << "        📖  MY AWESOME PHONEBOOK      \n";
			std::cout << "=====================================\n";
		}
	}
	return 0;
}
