#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "Roger";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap overload constructor with name called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{	
	this->_energyPoints--;
	std::cout << this->_name << " attacks with a microwave " << target << ", causing " << this->_attackDamage << " points of damage! " << this->_energyPoints << " points of energys left." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is in Gate keeper mode." << std::endl;
}
