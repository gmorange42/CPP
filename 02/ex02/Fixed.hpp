#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <tgmath.h>

class Fixed
{
	public:
		Fixed();
		Fixed(int const toConvert);
		Fixed(float const toConvert);
		Fixed(Fixed const& ref);
		bool	operator>(Fixed const& rhs);
		bool	operator<(Fixed const& rhs);
		bool	operator>=(Fixed const& rhs);
		bool	operator<=(Fixed const& rhs);
		bool	operator==(Fixed const& rhs);
		bool	operator!=(Fixed const& rhs);
		Fixed	operator+(Fixed const& rhs);
		Fixed	operator-(Fixed const& rhs);
		Fixed	operator*(Fixed const& rhs);
		Fixed	operator/(Fixed const& rhs);
		Fixed&	operator=(Fixed const& rhs);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		static Fixed	min(Fixed const& a, Fixed const& b);
		static Fixed	min(Fixed& a, Fixed& b);
		static Fixed	max(Fixed const& a, Fixed const& b);
		static Fixed	max(Fixed& a, Fixed& b);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
	private:
		int			_nbr;
		static const int	_bpp = 8;
};

std::ostream&	operator<<(std::ostream& stream, Fixed const& fidex);

#endif
