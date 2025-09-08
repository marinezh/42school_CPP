#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define NUM 5

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string& newName);
	~Zombie(void);
	void setName(const std::string& newName);
	void announce();
};

Zombie* zombieHorde(int N, const std::string& name);


#endif