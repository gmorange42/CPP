#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Default constructor (WrongCat class)." << std::endl;
}

WrongCat::WrongCat(WrongCat const& ref)
{
	std::cout << "Constructor by copy (WrongCat class)." << std::endl;
	*this = ref;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor (WrongCat class)." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << ("Meow...") << std::endl;
}
