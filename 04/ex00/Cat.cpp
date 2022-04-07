#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
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
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor (Cat class)." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << ("Meow...") << std::endl;
}
