#include "Zombie.hpp"

int main() {
	// 1) Stack-based zombie (auto-destroy)
	randomChump("Stacky");

	// 2) Heap-based zombie (must delete)
	Zombie* z = newZombie("Heapy");
	z->announce();
	z->test();
	delete z;

	return 0;
}
