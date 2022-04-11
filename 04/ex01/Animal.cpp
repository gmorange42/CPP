#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default constructor (Animal class)." << std::endl;
}

Animal::Animal(Animal const& ref)
{
	std::cout << "Constructor by copy (Animal class)." << std::endl;
	*this = ref;
}

Animal&	Animal::operator=(Animal const& rhs)
{
	std::cout << "Copy assignment operator (Animal class)" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor (Animal class)." << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << ("Quack!") << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string str)
{
	this->_type = str;
}
