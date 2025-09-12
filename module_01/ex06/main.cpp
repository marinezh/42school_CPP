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
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}

	Harl harl;
	LogLevel level = getLogLevel(argv[1]);

	switch (level) {
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			// fallthrough
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			// fallthrough
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			// fallthrough
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}

