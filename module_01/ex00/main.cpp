#include "Zombie.hpp"

int main() {
    // 1) Stack-based zombie (auto-destroy)
    randomChump("Stacky");

    // 2) Heap-based zombie (you must delete)
    Zombie* z = newZombie("Heapy");
    z->announce();
    delete z;

    // 3) Demonstrate default + setName
    Zombie tmp;            // default name
    tmp.setName("Renamed");
    tmp.announce();        // destructor runs at end of main()

    return 0;
}
