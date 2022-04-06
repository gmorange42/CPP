#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Roger"),_hit(10), _energiePoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),_hit(10), _energiePoints(10), _attackDamage(0)
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
	this->_hit = rhs._hit;
	this->_energiePoints = rhs._energiePoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{	
	if (this->_energiePoints > 0 and this->_hit  > 0)
	{
		this->_energiePoints--;
		std::cout << this->_name << " attacks with a bottle of water " << target << ", causing " << this->_attackDamage << " points of damage! " << this->_energiePoints << " points of energies left." << std::endl;
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{ 
	if (this->_hit  > 0)
	{
		this->_hit -= amount;
		std::cout << this->_name << " loses " << amount << " points of life!" << std::endl;
		if (this->_hit <= 0)
			std::cout << this->_name << " is dead." << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energiePoints > 0 and this->_hit  > 0)
	{
		this->_hit += amount;
		this->_energiePoints--;
		std::cout << this->_name << " wins " << amount << " point of life! " << this->_energiePoints << " points of energies left." << std::endl;
	}
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}
