#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string zombieName);
	~Zombie(void);
	void announce(void) const;
};
#endif