#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie();                             // default (lets us construct empty zombies if needed)
    explicit Zombie(const std::string& name);
    ~Zombie();                            // must print a message with the name

    void announce() const;                // "<name>: BraiiiiiiinnnzzzZ..."
    void setName(const std::string& name);
};

Zombie* newZombie(const std::string& name);   // heap
void     randomChump(const std::string& name);// stack + announce

#endif