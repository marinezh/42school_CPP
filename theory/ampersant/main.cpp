#include <iostream>
#include <string>

//Changes affect only that copy, not the original.
void not_change_original(std::string s)
{
	s[0] = 'X';
	std::cout << s << std::endl;
}
// with & Any changes you make are done directly on the original.
void change_original(std::string& s)
{
	s[0] = 'B';
	std::cout << s << std::endl;
}

int main()
{
	std::string name = "Mike";
	not_change_original(name); // "Xike"
	std::cout <<"original name :" << name << std::endl; // still "Mike"

	std::cout << "/////////////////////////////////////////" << std::endl;

	std::string name2 = "Kim";
	change_original(name2); // "Bim"
	std::cout <<"original name :" << name2 << std::endl; // "Bim"
	return 0;
}