#include <iostream>
#include <cctype>

class Megaphone {

	public:

		void toUpper(int ac, char **av)
		{
			if (ac == 1)
			{
				std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
				return;
			}
			for (int i = 1; i < ac; i++)
			{
				std::string string(av[i]); // converts the C-string (char*) into a C++ string object (std::string).
				for (char& c : string) {
					unsigned char uc = static_cast<unsigned char>(c);
					c = static_cast<char>(std::toupper(uc));
				}
				std::cout << string;
			}
			std::cout << std::endl;
		}
};

int main( int ac, char **av){

	Megaphone megaphone;

	megaphone.toUpper(ac, av);
	return 0;
}