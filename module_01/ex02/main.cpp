#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout <<  "Address of string:	" << &string <<std::endl;
	std::cout <<  "Address by stringPTR:	" << stringPTR <<std::endl;
	std::cout <<  "Address by stringREF:	" << &stringREF <<std::endl;

	std::cout << "Value of of string:		" << string << std::endl;
	std::cout << "Value pointed to by stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:	" << stringREF << std::endl;
}