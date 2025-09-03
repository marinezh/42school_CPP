#include <iostream>

void greet(std::string name){
	std::cout << "Hello, " << name << "!" << std::endl;
}

int add(int a, int b){
	return a + b;
}

int main(){
	greet("Student");
	std::cout << "2 + 3 = " << add(2,3) << std::endl;
	return 0;
}