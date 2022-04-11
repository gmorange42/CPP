#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "Default constructor (AAnimal class)." << std::endl;
}

AAnimal::AAnimal(AAnimal const& ref)
{
	std::cout << "Constructor by copy (AAnimal class)." << std::endl;
	*this = ref;
}

AAnimal&	AAnimal::operator=(AAnimal const& rhs)
{
	std::cout << "Copy assignment operator (AAnimal class)" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor (AAnimal class)." << std::endl;
}

void	AAnimal::makeSound(void) const
{
	std::cout << ("Quack!") << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string str)
{
	this->_type = str;
}
