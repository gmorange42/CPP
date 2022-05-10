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
	this->_nbr = toConvert << this->_bpp;
	std::cout << "Int contructor called" << std::endl;
}

Fixed::Fixed(float const toConvert)
{
	this->_nbr = round(toConvert * (1 << this->_bpp));
	std::cout << "Float contructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nbr = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return(this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nbr / (float)( 1 << this->_bpp));
}

int	Fixed::toInt(void) const
{
	return (this->_nbr / ( 1 << this->_bpp));
}

std::ostream&	operator<<(std::ostream& stream, Fixed const& fixed)
{
	stream << (fixed.toFloat());
	return(stream);
}
