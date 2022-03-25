#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "[Destructor called] : Auf Wiedersehen " << _name << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
