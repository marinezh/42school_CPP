#include "Harl.hpp"

enum LogLevel {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

LogLevel getLogLevel(const std::string &level) {
	if (level == "DEBUG")   return DEBUG;
	if (level == "INFO")    return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR")   return ERROR;
	return UNKNOWN;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Guess what? They put two pickles on my burger instead of three" << std::endl;
		return 1;
	}

	Harl harl;
	LogLevel level = getLogLevel(argv[1]);

	switch (level) {
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			
		default:
			std::cout << "Guess what? They put two pickles on my burger instead of three" << std::endl;
			break;
	}
	return 0;
}

