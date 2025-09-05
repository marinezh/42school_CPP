#include "Zombie.hpp"
#define NUM 5

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *horde = zombieHorde(NUM, "Heap");
	for (int i = 0; i < NUM; i++)
	horde[i].announce();
	delete[] horde;
	return 0;
}

// int main(){
	// 	Zombie one("one");
	// 	Zombie two("two");
	// 	Zombie three("three");
	
	// 	one.announce();
	// 	two.setName("blabla");
	// 	return 0;
	
	// }