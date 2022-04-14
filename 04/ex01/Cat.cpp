#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	_brain = new Brain();
	std::cout << "Default constructor (Cat class)." << std::endl;
}

Cat::Cat(Cat const& ref)
{
	std::cout << "Constructor by copy (Cat class)." << std::endl;
	this->_brain = NULL;
	*this = ref;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	std::cout << "Copy assignment operator (Cat class)" << std::endl;
	if (this->_brain)
		delete this->_brain;
	this->_type = rhs._type;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return (*this);
}

Cat::~Cat()
{
	if (this->_brain)
		delete this->_brain;
	std::cout << "Destructor (Cat class)." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << ("Meow...") << std::endl;
}

void	Cat::setIdea(int i, std::string str)
{
	this->_brain->setIdea(i, str);
}

std::string	Cat::getIdea(int i)
{
	return (this->_brain->ideas[i]);
}
