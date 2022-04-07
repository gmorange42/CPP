#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Default constructor (Dog class)." << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor (Dog class)." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << ("Woof!") << std::endl;
}
