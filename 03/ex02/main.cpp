#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	ClapTrap	calculon("Calculon");
	ScavTrap	bender("Bender");
	FragTrap	flexo("Flexo");

	std::cout << std::endl << "--BATTLE--" << std::endl << std::endl;

	calculon.attack("Bender");
	bender.takeDamage(calculon.getAttackDamage());
	bender.beRepaired(2);
	bender.attack("Flexo");
	flexo.takeDamage(bender.getAttackDamage());
	flexo.beRepaired(2);
	flexo.attack("Calculon");
	calculon.takeDamage(flexo.getAttackDamage());
	calculon.beRepaired(2);
	bender.guardGate();
	flexo.highFivesGuys();

	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	return (0);
}
