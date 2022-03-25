#include "Zombie.h"
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "randomChump{\"Jack\");" << std::endl;
	randomChump("Jack");
	std::cout << "Zombie* Franck = newZombie(\"Franck\");" << std::endl;
	Zombie*	Franck = newZombie("Franck");
	std::cout << "Franck->announce();" << std::endl;
	Franck->announce();
	delete Franck;
	return (0);
}
