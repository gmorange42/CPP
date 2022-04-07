#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	ClapTrap bender("Bender");
	ClapTrap calculon("Calculon");

	std::cout << std::endl << "--BATTLE--" << std::endl << std::endl;

	bender.attack("Calculon");
	calculon.takeDamage(0);
	calculon.beRepaired(2);
	calculon.attack("Bender");
	bender.takeDamage(0);
	bender.beRepaired(2);

	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	return (0);
}
