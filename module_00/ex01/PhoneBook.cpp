#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : count(0), nextIndex(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(){
	std::string input;
	Contact c;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	c.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	c.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	c.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	c.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	c.setDarkestSecret(input);

	contacts[nextIndex] = c;
	if (count < 8)
		count++;
	nextIndex = (nextIndex + 1)%8;

	std::cout << "Contact added!" << std::endl;
}

void PhoneBook::searchContact() const {
	if (count == 0) {
		std::cout << "PhoneBook is empty!" << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < count; i++) {
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << contacts[i].getShortFirstName() << "|"
				  << std::setw(10) << contacts[i].getShortLastName() << "|"
				  << std::setw(10) << contacts[i].getShortNickname() << std::endl;
	}

	std::cout << "Enter index to display: ";
	int index;
	if (!(std::cin >> index)) {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid input!" << std::endl;
		return;
	}
	std::cin.ignore(); // consume leftover newline

	if (index < 0 || index >= count) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}

	std::cout << "First name: "    << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: "     << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: "      << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: "  << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: "<< contacts[index].getDarkestSecret() << std::endl;
}