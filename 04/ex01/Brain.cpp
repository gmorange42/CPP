#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor (Cat class)." << std::endl;
}

Brain::Brain(Brain const& ref)
{
	*this = ref;
}

Brain&	Brain::operator=(Brain const& rhs)
{
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Desctructor (Brain class)." << std::endl;
}
