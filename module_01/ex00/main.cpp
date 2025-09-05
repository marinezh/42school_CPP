#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main() {
    // 1) Stack-based zombie (auto-destroy)
    randomChump("Stacky");

    // 2) Heap-based zombie (you must delete)
    Zombie* z = newZombie("Heapy");
    z->announce();
    delete z;


    return 0;
}
