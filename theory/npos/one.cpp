#include <iostream>
#include <string>

int main(){
	std::string text = "hello world";

	if (text.find("world") != std::string::npos)
		std::cout << "Found 'world'\n" << std::endl;
	
	if (text.find("earth") == std::string::npos)
		std::cout << "'earth' not found. " << std::endl;


	std::string text = "banana";
    size_t pos = 0;

    while ((pos = text.find("na", pos)) != std::string::npos) {
        std::cout << "'na' found at position " << pos << "\n";
        pos += 2; // move past the match
    }
	
	std::string path = "folder/subfolder/file.txt";
    size_t pos = path.find('/');

    if (pos != std::string::npos) {
        std::string firstFolder = path.substr(0, pos);
        std::cout << "First folder: " << firstFolder << "\n";
    }

	
	return 0;
}