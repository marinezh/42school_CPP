#include "Contact.hpp"

Contact::Contact(void){};
Contact::~Contact(void){};

void Contact::setFirstName(const std::string& fn){
	firstName = fn;
}

void Contact::setLastName(const std::string& ln){
	lastName = ln;
}

void Contact::setNickname(const std::string& nn){
	nickname = nn;
}

void Contact::setPhoneNumber(const std::string& fn){
	phoneNumber = fn;
}

void Contact::setDarkestSecret(const std::string& ds){
	darkestSecret = ds;
}

std::string Contact::getFirstName() const {
	return firstName;
}
std::string Contact::getLastName() const {
	return lastName;
}
std::string Contact::getNickname() const {
	return nickname;
}
std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}
std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}

std::string Contact::formatShort(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

std::string Contact::getShortFirstName() const {
	return formatShort(firstName);
}
std::string Contact::getShortLastName() const {
	return formatShort(lastName);
}
std::string Contact::getShortNickname() const {
	return formatShort(nickname);
}