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
