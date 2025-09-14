#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
	
	PhoneBook pb;
	std::string command;

	while (true) {
		std::cout << "=====================================\n";
		std::cout << "        📖  MY AWESOME PHONEBOOK      \n";
		std::cout << "=====================================\n";
		std::cout << "Commands: ADD | SEARCH | EXIT\n\n";
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, command))
			break;

		if (command == "ADD")
			pb.addContact();
		else if (command == "SEARCH")
			pb.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}

	return 0;
}
