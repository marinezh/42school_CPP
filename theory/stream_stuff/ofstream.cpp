#include <iostream>
#include <fstream>
#include <fstream>
#include <sstream>

int main() {
    std::ofstream output("out.txt");  // ope file for writing into file
    if (!output.is_open()) {
        std::cerr << "error: cannt open the file\n";
        return 1;
    }

    output << "Hello, world!" << std::endl;  // write the line into file
    output << 42 << " - this is number" << std::endl;
	output << 42 << "- it's time to learn cpp " << std::endl;

	output.close();
	///////////////////////////////////////////////////////////////////
	std::ifstream input("text.txt");   // open the file
    if (!input.is_open()) {
        std::cerr << "error: cannt open the file\n";
        return 1;
    }

    std::ostringstream buffer;         // создаём строковый поток
    buffer << input.rdbuf();           // читаем весь файл в буфер строки

    std::string content = buffer.str(); // получаем содержимое как std::string
    std::cout << "Содержимое файла:\n" << content << std::endl;


    
    return 0;
}
