#include <iostream>
#include <vector>

int main() {

	// vector creation, works from c++11✅
	std::vector<int> numbers = {1, 2, 3, 4, 5};  // create an empty vector of ints

	numbers.push_back(10);      // add element 10
	numbers.push_back(20);      // add element 20
	numbers.push_back(30);      // add element 30

	std::cout << "Size: " << numbers.size() << std::endl; // prints 3

	// Access like array
	std::cout << numbers[0] << std::endl; // 10
	std::cout << numbers[1] << std::endl; // 20
	std::cout << numbers[2] << std::endl; // 30

	// Iterate with loop
	for (size_t i = 0; i < numbers.size(); i++) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	// vector ceation from array, works for c++98 ✅
	int const arr[] = { 42, 54, 957 };
	size_t size = sizeof(arr) / sizeof(int);
	std::vector<int> numbers2(arr, arr + size);

	for (size_t i = 0; i < numbers2.size(); i++){
		std::cout << numbers2[i] << " ";
	}
	std::cout << std::endl;

	//Pre-filled with the same value (works in C++98 ✅)
	//Creates a vector with 5 elements, each set to 100.
	std::vector<int> numbers3(5, 100);
	for (size_t i = 0; i < numbers3.size(); i++){
		std::cout << numbers3[i] << " ";
	}
	std::cout << std::endl;

	//Default values (works in C++98 ✅)
	//Creates a vector with 10 elements, all initialized to 0.
	std::vector<int> numbers4(10);
	for (size_t i = 0; i < numbers4.size(); i++){
		std::cout << numbers4[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
