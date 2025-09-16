#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : count(0), nextIndex(0) {}
PhoneBook::~PhoneBook() {}

std::string notEmptyCheck(const std::string& prompt){
	std::string input;
	while (true) {
		std::cout << prompt;
		if (!std::getline(std::cin, input)) {
			std::cout << "\nProgram interrupted." << std::endl;
			return "";
		}
		if (!input.empty())
			return input;
		std::cout << "Field cannot be empty. Try again." << std::endl;
	}
}

void PhoneBook::addContact(){

	Contact c;

	std::string first = notEmptyCheck("Enter first name: ");
	if (first.empty())
		return;  // abort adding, back to main loop
	c.setFirstName(first);

	std::string last = notEmptyCheck("Enter last name: ");
	if (last.empty())
		return;  // abort adding, back to main loop
	c.setFirstName(last);

	std::string nick = notEmptyCheck("Enter nickname: ");
	if (nick.empty())
		return;  // abort adding, back to main loop
	c.setFirstName(nick);

	std::string phone = notEmptyCheck("Enter phone number: ");
	if (phone.empty())
		return;  // abort adding, back to main loop
	c.setFirstName(phone);

	std::string secret = notEmptyCheck("Enter darkest secret: ");
	if (secret.empty())
		return;  // abort adding, back to main loop
	c.setFirstName(secret);

	contacts[nextIndex] = c;
	if (count < 8)
		count++;
	nextIndex = (nextIndex + 1)%8;
	std::cout << "Contact added!" << std::endl;
}

bool PhoneBook::searchContact() const {
	if (count == 0) {
		std::cout << "PhoneBook is empty!" << std::endl;
		return false;
	}

	std::cout << std::setw(10) << std::right << "Index" << "|"
			  << std::setw(10) << std::right <<"First Name" << "|"
			  << std::setw(10) << std::right <<"Last Name" << "|"
			  << std::setw(10) << std::right <<"Nickname" << std::endl;

	for (int i = 0; i < count; i++) {
		std::cout << std::setw(10) << std::right << i << "|"
				  << std::setw(10) << std::right << contacts[i].getShortFirstName() << "|"
				  << std::setw(10) << std::right << contacts[i].getShortLastName() << "|"
				  << std::setw(10) << std::right << contacts[i].getShortNickname() << std::endl;
	}

	std::cout << "Enter index to display: ";
	int index;
	if (!(std::cin >> index)) {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid input!" << std::endl;
		return false;
	}
	std::cin.ignore();

	if (index < 0 || index >= count) {
		std::cout << "Invalid index!" << std::endl;
		return false;
	}

	std::cout << "First name: "    << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: "     << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: "      << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: "  << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: "<< contacts[index].getDarkestSecret() << std::endl;

	return true;
}
