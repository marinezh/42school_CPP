#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(NUM, "Heap");
	for (int i = 0; i < NUM; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}

