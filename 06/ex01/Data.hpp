#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data
{
	public:
		Data(void);
		Data(int new_int, char new_char, float new_float);
		Data(Data const& ref);
		Data&	operator=(Data const& rhs);
		~Data(void);
		void	print_values(void) const;
	private:
		int	_int;
		char	_char;
		float	_float;
};

#endif
