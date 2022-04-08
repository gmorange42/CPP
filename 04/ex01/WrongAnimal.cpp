#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "Default constructor (WrongAnimal class)." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& ref)
{
	std::cout << "Constructor by copy (WrongAnimal class)." << std::endl;
	*this = ref;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor (WrongAnimal class)." << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << ("Quack!") << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
