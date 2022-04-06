#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Roger";
	this->_hit = 100;
	this->_energiePoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit = 100;
	this->_energiePoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap overload constructor with name called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{	
	if (this->_energiePoints > 0 and this->_hit  > 0)
	{
		this->_energiePoints--;
		std::cout << this->_name << " attacks with a baseball bat " << target << ", causing " << this->_attackDamage << " points of damage! " << this->_energiePoints << " points of energies left." << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hit  > 0)
		std::cout << this->_name << " says \"Hey ! Give me a high fives Dude !\"" << std::endl;
}
