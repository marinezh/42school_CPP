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
#include <iostream>

class Account {
public:
    Account(int initial_deposit) {
        std::cout << "Account created with amount: " 
                  << initial_deposit << std::endl;
    }
};

int main() {
    int const amounts[] = { 42, 54, 957, 432 };
    size_t size = sizeof(amounts) / sizeof(int);

    // Вместо вектора — создаём аккаунты вручную в цикле
    for (size_t i = 0; i < size; i++) {
        Account acc(amounts[i]); // вызываем конструктор Account(int)
    }

    return 0;
}

class Account {
public:
    Account(int initial_deposit) : _amount(initial_deposit) {
        std::cout << "Constructor: amount = " << _amount << std::endl;
    }
    ~Account() {
        std::cout << "Destructor: amount = " << _amount << std::endl;
    }
private:
    int _amount;
};

int main() {
    int const amounts[] = { 42, 54, 957 };
    size_t size = sizeof(amounts) / sizeof(int);

    std::cout << "\n=== ВАРИАНТ 1: цикл без вектора ===\n";
    for (size_t i = 0; i < size; i++) {
        Account acc(amounts[i]);
        std::cout << "  Используем acc внутри цикла\n";
    }
    std::cout << "После цикла никаких объектов Account не осталось!\n";

    std::cout << "\n=== ВАРИАНТ 2: вектор с диапазоном ===\n";
    std::vector<Account> accounts(amounts, amounts + size);
    std::cout << "Вектор хранит " << accounts.size() << " объектов Account\n";
    std::cout << "Они будут жить до конца main\n";

    std::cout << "\n=== Конец main ===\n";
    return 0;
}