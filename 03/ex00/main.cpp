#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap bender("Bender");
	ClapTrap calculon("Calculon");

	bender.attack("Calculon");
	calculon.takeDamage(0);
	calculon.beRepaired(2);
	calculon.attack("Bender");
	bender.takeDamage(0);
	bender.beRepaired(2);

	return (0);
}
