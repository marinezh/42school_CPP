#include <iostream>
#include <string>

int main() {
    std::string brain1 = "Brain #1";
    std::string brain2 = "Brain #2";

    // Ссылка (навсегда связана с brain1)
    std::string& ref = brain1;

    // Указатель (можно переназначать)
    std::string* ptr = &brain1;

    std::cout << "ref: " << ref << std::endl;      // Brain #1
    std::cout << "*ptr: " << *ptr << std::endl;    // Brain #1

    std::cout << "\n--- Меняем объекты ---\n";
    brain1 = "Brain #1 changed";
    brain2 = "Brain #2 changed";

    std::cout << "ref: " << ref << std::endl;      // Brain #1 changed
    std::cout << "*ptr: " << *ptr << std::endl;    // Brain #1 changed

    std::cout << "\n--- Переназначаем указатель ---\n";
    ptr = &brain2;   // указатель теперь смотрит на brain2

    std::cout << "ref: " << ref << std::endl;      // всё ещё Brain #1 changed
    std::cout << "*ptr: " << *ptr << std::endl;    // Brain #2 changed

    return 0;
}
