#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _weapon(type)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
