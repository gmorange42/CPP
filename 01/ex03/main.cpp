#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	humanA(void)
{
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("Some other type of club");
	bob.attack();
}

void	humanB(void)
{
	Weapon	club = Weapon("crude spiked club");
	HumanB	jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("Some other type of club");
	jim.attack();
}

int	main(void)
{
	humanA();
	humanB();
	return (0);
}
