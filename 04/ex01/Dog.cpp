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
	std::cout << "Copy assignment operator (Dog class)" << std::endl;
	if (this->_brain)
		delete this->_brain;
	this->_type = rhs._type;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return (*this);
}

Dog::~Dog()
{
	if (this->_brain)
		delete this->_brain;
	std::cout << "Destructor (Dog class)." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << ("Woof!") << std::endl;
}

void	Dog::setIdea(int i, std::string str)
{
	this->_brain->setIdea(i, str);
}

std::string	Dog::getIdea(int i)
{
	return (this->_brain->ideas[i]);
}
