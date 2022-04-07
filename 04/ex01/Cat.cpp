#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Default constructor (Cat class)." << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor (Cat class)." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << ("Meow...") << std::endl;
}
