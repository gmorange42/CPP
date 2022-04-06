#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "Roger";
	this->_hit = 100;
	this->_energiePoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit = 100;
	this->_energiePoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap overload constructor with name called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{	
	if (this->_energiePoints > 0 and this->_hit  > 0)
	{
		this->_energiePoints--;
		std::cout << this->_name << " attacks with a microwave " << target << ", causing " << this->_attackDamage << " points of damage! " << this->_energiePoints << " points of energies left." << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if(this->_hit  > 0)
		std::cout << this->_name << " is in Gate keeper mode." << std::endl;
}
