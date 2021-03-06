#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const& ref);
		Fixed&	operator=(Fixed const& other);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int			_nbr;
		static const int	_bpp = 8;
};

#endif
