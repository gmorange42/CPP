#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Roger";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap overload constructor with name called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& ref)
{
	*this = ref;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{	
	this->_energyPoints--;
	std::cout << this->_name << " attacks with a baseball bat " << target << ", causing " << this->_attackDamage << " points of damage! " << this->_energyPoints << " points of energys left." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " says \"Hey ! Give me a high fives Dude !\"" << std::endl;
}
