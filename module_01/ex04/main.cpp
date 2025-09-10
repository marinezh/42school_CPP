#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

// int main(int argc, char **argv)
// {
// 	if (argc != 4){
// 		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
// 		return 1;
// 	}
// 	std::string file_name = argv[1];
// 	std::string s1 = argv[2];
// 	std::string s2 = argv[3];
// 	if ( s1.empty() || file_name.empty()) {
// 		std::cerr << "Error: Invalid input" << std::endl;
// 		return 1;
// 	}
// 	std::ifstream input(file_name);
// 	if (!input.is_open()){
// 		std::cerr << "Error: cannot open input file" << std::endl;
// 		return 1;
// 	}
// 	std::ofstream output(file_name + ".replace");
// 	if (!output.is_open()) {
// 		std::cerr << "Error: Could not create output file" << std::endl;
// 		return 1;
// 	}
// 	std::string line;
// 	while(std::getline(input, line))
// 	{
// 		size_t pos = 0;
// 		while ((pos = line.find(s1, pos)) != std::string::npos) {
//  			 line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
// 			pos += s2.length();
// 		}
// 		output << line << std::endl;
// 	}
// 	return 0;
// }
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::cout << "??????"<< file_name << " " << s1 << " "<<  s2 << std::endl;
	if (s1 == "\\n")
		s1 = "\n";
	if (s2 == "\\n")
		s2 = "\n";
	if (s1 == "\n" && s2 != "\n")
		s2 += "\n";
	std::cout << "!!!!!!!"<< file_name << " " << s1 << " "<<  s2 << std::endl;
	if (s1.empty() || file_name.empty()) {
		std::cerr << "Error: Invalid input" << std::endl;
		return 1;
	}

	std::ifstream input(file_name);
	if (!input.is_open()){
		std::cerr << "Error: cannot open input file" << std::endl;
		return 1;
	}
	// read the entire file into one string
	std::ostringstream buffer;
	buffer << input.rdbuf();
	std::string content = buffer.str();
	
	std::ofstream output(file_name + ".replace");
	if (!output.is_open()) {
		std::cerr << "Error: Could not create output file" << std::endl;
		return 1;
	}
	// replace all occurrences of s1 with s2
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
		pos += s2.length();
	}

	output << content;
	return 0;
}
