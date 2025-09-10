#include <iostream>
#include <string>
#include <cstring>

int main(){

	std::string s = "banana";

	const char* p = s.c_str();
	std::cout << p << std::endl;   // banana

	s += " split";                 // modifies the string
	std::cout << p << std::endl;   // ❌ undefined behavior 
	std::cout << s.c_str() << std::endl; // ✅ correct
	std::cout << s << std::endl; // ✅ correct

	return 0;
}

// int main ()
// {
//   std::string str ("Please split this sentence into tokens");

//   char * cstr = new char [str.length()+1];
//   std::strcpy (cstr, str.c_str());

//   // cstr now contains a c-string copy of str

//   char * p = std::strtok (cstr," ");
//   while (p!=0)
//   {
//     std::cout << p << '\n';
//     p = std::strtok(NULL," ");
//   }

//   delete[] cstr;
//   return 0;
// }