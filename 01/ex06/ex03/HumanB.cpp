#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon& type)
{
	this->_weapon = &type;
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " cannot attack without a weapon..." << std::endl;
}
