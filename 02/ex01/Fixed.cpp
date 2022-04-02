#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed(Fixed const& ref)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = ref;
}

Fixed::Fixed(int const toConvert)
{
	std::cout << "TEST : " << toConvert << std::endl;
	this->_nbr = toConvert << this->_bpp;
	std::cout << "Int contructor called" << std::endl;
}

Fixed::Fixed(float const toConvert)
{
	std::cout << "Float contructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nbr = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return(this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
}

float	Fixed::toFloat(void) const
{
}

int	Fixed::toInt(void) const
{
	return (this->_nbr >> this->_bpp);
}

std::ostream&	operator<<(std::ostream& stream, Fixed const& fixed)
{
	stream << fixed.getRawBits();
	return(stream);
}
