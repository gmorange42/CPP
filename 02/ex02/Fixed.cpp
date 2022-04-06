#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0)
{
}

Fixed::Fixed(Fixed const& ref)
{
	*this = ref;
}

Fixed::Fixed(int const toConvert)
{
	this->_nbr = toConvert << this->_bpp;
}

Fixed::Fixed(float const toConvert)
{
	this->_nbr = round(toConvert * (1 << 8));
}


Fixed::~Fixed()
{
}

bool	Fixed::operator>(Fixed const& rhs)
{
	return(this->_nbr > rhs._nbr);
}

bool	Fixed::operator<(Fixed const& rhs)
{
	return(this->_nbr < rhs._nbr);
}

bool	Fixed::operator>=(Fixed const& rhs)
{
	return(this->_nbr >= rhs._nbr);
}

bool	Fixed::operator<=(Fixed const& rhs)
{
	return(this->_nbr <= rhs._nbr);
}

bool	Fixed::operator==(Fixed const& rhs)
{
	return(this->_nbr == rhs._nbr);
}

bool	Fixed::operator!=(Fixed const& rhs)
{
	return(this->_nbr != rhs._nbr);
}

Fixed	Fixed::operator+(Fixed const& rhs)
{
	return Fixed((((float)this->_nbr) / (float)(1 << this->_bpp)) + ((float)(rhs._nbr) / (float)(1 << this->_bpp)));
}

Fixed	Fixed::operator-(Fixed const& rhs)
{
	return Fixed((((float)this->_nbr) / (float)(1 << this->_bpp)) - ((float)(rhs._nbr) / (float)(1 << this->_bpp)));
}

Fixed	Fixed::operator*(Fixed const& rhs)
{
	return Fixed((((float)this->_nbr) / (float)(1 << this->_bpp)) * ((float)(rhs._nbr) / (float)(1 << this->_bpp)));
}

Fixed	Fixed::operator/(Fixed const& rhs)
{
	return Fixed((((float)this->_nbr) / (float)(1 << this->_bpp)) / ((float)(rhs._nbr) / (float)(1 << this->_bpp)));
}

Fixed&	Fixed::operator++(void)
{
	this->_nbr++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp;
	temp._nbr = this->_nbr;
	this->_nbr++;
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	this->_nbr--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp;
	temp._nbr = this->_nbr;
	this->_nbr--;
	return (temp);
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	this->_nbr = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return(this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

std::ostream&	operator<<(std::ostream& stream, Fixed const& fixed)
{
	stream << (fixed.toFloat());
	return(stream);
}
