#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "Roger";
	FragTrap::_hit = 100;
	ScavTrap::_energiePoints = 100;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	FragTrap::_hit = 100;
	ScavTrap::_energiePoints = 100;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap overload constructor with name called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
/*
void	ScavTrap::attack(const std::string& target)
{	
	if (ScavTrap::_energiePoints > 0 and ScavTrap::_hit  > 0)
	{
		ScavTrap::_energiePoints--;
		std::cout << ScavTrap::_name << " attacks with a baseball bat " << target << ", causing " << ScavTrap::_attackDamage << " points of damage! " << ScavTrap::_energiePoints << " points of energies left." << std::endl;
	}
}
*/
