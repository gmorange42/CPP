#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Roger"),_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap overload constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& ref)
{
	std::cout << "ClapTrap constructor by copy called" << std::endl;
	*this = ref;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{	
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << this->_name << " attacks with a bottle of water " << target << ", causing " << this->_attackDamage << " points of damage! " << this->_energyPoints << " points of energy left." << std::endl;
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{ 
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " loses " << amount << " points of life!" << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " died. RIP." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << this->_name << " wins " << amount << " points of life! " << this->_energyPoints << " points of energy left." << std::endl;
	}
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	if (this->_hitPoints > 0)
		return (this->_attackDamage);
	std::cout << this->_name << " is dead, so he can't take damage." << std::endl;
	return (0);
}
