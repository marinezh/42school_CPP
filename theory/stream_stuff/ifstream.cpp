#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ifstream input("text.txt");  // open file for reading
	if (!input.is_open()) {
		std::cerr << "error: can not open file\n";
		return 1;
	}

	std::string line;
	while (std::getline(input, line)) {  // read line by line
		std::cout << line << std::endl;
	}

	input.close();  // close file (not nesessury,calls in destructor)
	return 0;
}
