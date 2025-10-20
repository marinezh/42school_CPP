#include <iostream>


class Book {
	public:
		std::string Title;
		std::string Author;
		float *Rates;
		int RatesCounter;

		Book(std::string title, std::string author){
			Title = title;
			Author = author;

			RatesCounter = 2;
			Rates = new float[RatesCounter];
			Rates[0] = 5;
			Rates[1] = 4;
		}
		~Book(){
			delete[]Rates;
			Rates = nullptr;
		}

		//copy constructor - performs DEEP COPY to avoid double deletion
		Book(const Book &original) {
			Title = original.Title;
			Author = original.Author;
			RatesCounter = original.RatesCounter;
			
			// WRONG WAY - SHALLOW COPY (keep as example of what NOT to do):
			// Rates = original.Rates; 
			// This copies only the POINTER VALUE (memory address), not the actual data
			// Both objects point to the SAME memory location
			// When first object destructor calls delete[] Rates, memory is freed
			// When second object destructor calls delete[] Rates -> DOUBLE DELETION -> CRASH!
			
			// CORRECT WAY - DEEP COPY:
			// Allocate NEW memory and copy the VALUES
			Rates = new float[RatesCounter];
			for (int i = 0; i < RatesCounter; i++) {
				Rates[i] = original.Rates[i];
			}
			// Now each object has its OWN copy of the data, safe to delete separately
		}

		// Copy assignment operator (for when both objects already exist)
		Book& operator=(const Book& other) {
			std::cout << "Copy assignment operator called" << std::endl;
			
			// Self-assignment check: prevent book1 = book1
			if (this != &other) {
				// Clean up existing memory first
				delete[] Rates;
				
				// Copy simple members
				Title = other.Title;
				Author = other.Author;
				RatesCounter = other.RatesCounter;
				
				// Deep copy of dynamic memory
				Rates = new float[RatesCounter];
				for (int i = 0; i < RatesCounter; i++) {
					Rates[i] = other.Rates[i];
				}
			}
			
			// Return reference to this object (allows chaining: a = b = c)
			return *this;
		}

		void print() const {
			std::cout << "Title: " << Title << std::endl;
			std::cout << "Author: " << Author << std::endl;
			std::cout << "Rates: ";
			for (int i = 0; i < RatesCounter; i++) {
				std::cout << Rates[i];
				if (i < RatesCounter - 1) std::cout << ", ";
			}
			std::cout << std::endl;
			std::cout << "Number of rates: " << RatesCounter << std::endl;
		}

		// Friend function to overload << operator
		friend std::ostream& operator<<(std::ostream& os, const Book& book) {
			os << "Title: " << book.Title << std::endl;
			os << "Author: " << book.Author << std::endl;
			os << "Rates: ";
			for (int i = 0; i < book.RatesCounter; i++) {
				os << book.Rates[i];
				if (i < book.RatesCounter - 1) os << ", ";
			}
			os << std::endl;
			os << "Number of rates: " << book.RatesCounter;
			return os;
		}
};

int main()
{
	Book book1("Millionare Fastlane", "M.J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek F"); 
	
	// Both of these call the COPY CONSTRUCTOR (same behavior, different syntax):
	Book book3(book1);   // Direct initialization syntax - calls copy constructor
	Book book4 = book1;  // Copy initialization syntax - also calls copy constructor (NOT assignment operator!)

	std::cout << "=== Testing Deep Copy ===" << std::endl;
	std::cout << "Original Book (book1):" << std::endl;
	book1.print();
	std::cout << std::endl;

	std::cout << "Copied Book (book3) - direct initialization:" << std::endl;
	book3.print();
	std::cout << std::endl;

	std::cout << "Copied Book (book4) - copy initialization:" << std::endl;
	book4.print();
	std::cout << std::endl;

	std::cout << "Book 2:" << std::endl;
	book2.print();
	std::cout << std::endl;

	std::cout << "=== Testing Copy Assignment Operator ===" << std::endl;
	// Now book2 already exists, so this will call assignment operator
	book2 = book1;  // Copy assignment operator called!
	
	std::cout << "After assignment (book2 = book1):" << std::endl;
	book2.print();
	std::cout << std::endl;

	std::cout << "=== Testing Assignment Chaining ===" << std::endl;
	Book book5("Original Book 5", "Author 5");
	book5 = book4 = book1;  // Chaining: book4 = book1, then book5 = book4
	
	std::cout << "Book5 after chained assignment:" << std::endl;
	book5.print();
	std::cout << std::endl;
	
	std::cout << "All objects will be safely destroyed without double deletion!" << std::endl;
}
// int main()
// {
// 	Book book1("Millionare Fastlane", "M.J. DeMarco");
// 	Book book2("C++ Lambda Story", "Bartek F"); 

// 	// Using the print() method
// 	std::cout << "=== Using print() method ===" << std::endl;
// 	std::cout << "Book 1:" << std::endl;
// 	book1.print();
// 	std::cout << std::endl;

// 	std::cout << "Book 2:" << std::endl;
// 	book2.print();
// 	std::cout << std::endl;

// 	// Using the overloaded << operator
// 	std::cout << "=== Using << operator ===" << std::endl;
// 	std::cout << "Book 1:" << std::endl << book1 << std::endl << std::endl;
// 	std::cout << "Book 2:" << std::endl << book2 << std::endl;
// }