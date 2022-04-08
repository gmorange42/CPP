#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	_brain = new Brain();
	std::cout << "Default constructor (Dog class)." << std::endl;
}

Dog::Dog(Dog const& ref)
{
	std::cout << "Constructor by copy (Dog class)." << std::endl;
	*this = ref;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	this->_type = rhs._type;
	delete this->_brain;
	this->_brain = new Brain();
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor (Dog class)." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << ("Woof!") << std::endl;
}
