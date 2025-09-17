#include <iostream>
#include <string>
#include <cctype>

int main() {
   // std::string s = "é";   // UTF-8 encoding → two bytes: 0xC3 0xA9
    std::string s = "hello é ";   // UTF-8 encoding → two bytes: 0xC3 0xA9


    std::cout << "string length = " << s.size() << std::endl;

    for (std::size_t i = 0; i < s.size(); ++i) {
        unsigned char uc = static_cast<unsigned char>(s[i]);

        std::cout << "s[" << i << "] raw value: " << static_cast<int>(s[i]) << std::endl;
        std::cout << "s[" << i << "] as unsigned: " << static_cast<int>(uc) << std::endl;

        int wrong = std::toupper(s[i]);   // ❌ UB if char < 0
        int safe  = std::toupper(uc);     // ✅ safe

        std::cout << "toupper(char) result (UB): " << wrong << std::endl;
        std::cout << "toupper(unsigned char) result: " << safe << std::endl;
        std::cout << "--------" << std::endl;
    }
	for (char &c : s) {
        unsigned char uc = static_cast<unsigned char>(c);
        c = static_cast<char>(std::toupper(uc));  // safe conversion
    }

    std::cout << "Uppercased: " << s << std::endl;
    return 0;

	return 0;
}