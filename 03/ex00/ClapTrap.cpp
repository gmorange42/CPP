#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Roger"),_hit(10), _energiePoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),_hit(10), _energiePoints(10), _attackDamage(0)
{
	std::cout << "Overload constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& ref)
{
	std::cout << "Constructor by copy called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{	
	if (this->_energiePoints > 0)
	{
		this->_energiePoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attackDamage << " points of damage! " << this->_energiePoints << " points of energies left." << std::endl;
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit -= amount;
	std::cout << "ClapTrap " << this->_name << " loses " << amount << " points of life!" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energiePoints > 0)
	{
		this->_hit += amount;
		this->_energiePoints--;
		std::cout << "ClapTrap " << this->_name << " wins " << amount << " point of life! " << this->_energiePoints << " points of energies left." << std::endl;
	}
}
