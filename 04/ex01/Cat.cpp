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
	*this = ref;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	this->_type = rhs._type;
	delete this->_brain;
	this->_brain = new Brain();
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor (Cat class)." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << ("Meow...") << std::endl;
}

void	Cat::setBrain(int i, std::string str)
{
	this->_brain->ideas[i] = str;
}
