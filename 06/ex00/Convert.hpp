#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cmath>

class Convert
{
	public:
		Convert();
		Convert(std::string str);
		Convert(Convert const& ref);
		Convert& operator=(Convert const& rhs);
		~Convert();
		void	print_char();
		void	print_int();
		void	print_float();
		void	print_double();
	private:
		double	_d;
		class	BadArgument : public std::exception
		{
			const char* what() const throw();
		};
};

#endif
