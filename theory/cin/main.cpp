#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;  // waits for user input
    std::cout << "Hello, " << name << "!\n";
    return 0;
}