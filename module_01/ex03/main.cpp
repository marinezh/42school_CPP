#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("A Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("B Jim");
		jim.attack();
		jim.setWeapon(club); // give a weapon
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;

}