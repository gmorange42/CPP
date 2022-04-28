#include "Data.hpp"

Data::Data(void) : _int(42), _char('M'), _float(32.38) {}

Data::Data(int new_int, char new_char, float new_float):
	_int(new_int),
	_char(new_char),
	_float(new_float)
{}

Data::Data(Data const& ref)
{
	*this = ref;
}

Data&	Data::operator=(Data const& rhs)
{
	this->_int = rhs._int;
	this->_char = rhs._char;
	this->_float = rhs._float;
	return (*this);
}

Data::~Data(void) {}

void	Data::print_values(void) const
{
	std::cout << "_int " << this->_int << std::endl;
	std::cout << "_char " << this->_char << std::endl;
	std::cout << "_float " << this->_float << std::endl;
}
