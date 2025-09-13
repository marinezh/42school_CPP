#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneBook;
	std::string darkestSecret;

public:
	Contact(void);
	~Contact(void);
	
	// setters
	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setNickname(const std::string& nickname);
	void setPhoneNumber(const std::string& phoneNumber);
	void setDarkestSecret(const std::string& darkestSecret);

	// getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	// short getters for SEARCH display
	std::string getShortFirstName() const;
	std::string getShortLastName() const;
	std::string getShortNickname() const;
};

#endif