#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	ScavTrap bender("Bender");
	ClapTrap calculon("Calculon");

	std::cout << std::endl << "--BATTLE--" << std::endl << std::endl;

	calculon.attack("Bender");
	bender.takeDamage(calculon.getAttackDamage());
	bender.beRepaired(2);
	bender.attack("Calculon");
	calculon.takeDamage(bender.getAttackDamage());
	calculon.beRepaired(2);
	bender.guardGate();

	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	return (0);
}
