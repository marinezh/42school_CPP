#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

int main() {
	std::ostringstream oss;
	oss << "Name: " << "Alina" << ", age: " << 25 << std::endl;
	oss << "Name: " << "Alisa" << ", age: " << 25 << "\n";
	oss << "Name: " << "Ben" << ", age: " << 25 << std::endl;

	//std::string result = oss.str();  // get the line
	//std::string result = oss.str();  // get the line
	//std::cout << result << std::endl;  
	std::cout << oss.str() << std::endl;  
	
	/////////////////////////////////////////////////////////////////////
	std::ifstream input("text.txt");   // open the file
	if (!input.is_open()) {
		std::cerr << "error: cannt open the file\n";
		return 1;
	}
	
	oss << input.rdbuf();
	std::string content2 = oss.str();
	std::cout << "file content:\n" << content2 << std::endl;


	// std::ostringstream buffer;         // create a string stream
	// buffer << input.rdbuf();           // read the entire file into the line buffer

	// std::string content = buffer.str(); // получаем содержимое как std::string
	// std::cout << "file content:\n" << content << std::endl;

	return 0;
}
