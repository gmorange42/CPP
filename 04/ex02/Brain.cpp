#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor (Brain class)." << std::endl;
}

Brain::Brain(Brain const& ref)
{
	std::cout << "Constructor by copy (Brain class)." << std::endl;
	*this = ref;
}

Brain&	Brain::operator=(Brain const& rhs)
{
	std::cout << "Copy assignment operator (Brain class)" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor (Brain class)." << std::endl;
}

void	Brain::setIdea(int i, std::string str)
{
	this->ideas[i] = str;
}

std::string	Brain::getIdea(int i)
{
	return (ideas[i]);
}
