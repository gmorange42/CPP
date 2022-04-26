#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string str) : _d(atof(str.c_str()))
{
	if (!_d and str.size() == 1 and str.c_str()[0] != '0')
		_d = static_cast<double>(str.c_str()[0]);
	else if (!_d and str.size() > 1)
		throw BadArgument();
}

Convert::Convert(Convert const& ref)
{
	*this = ref;
}

Convert&	Convert::operator=(Convert const& rhs)
{
	this->_d = rhs._d;
	return (*this);
}

Convert::~Convert() {}

void	Convert::print_char(void)
{
	std::cout << "char: ";
        if (std::isnan(this->_d) or std::isinf(this->_d))
                std::cout << "impossible" << std::endl;
        else if (this->_d < 32 || this->_d > 126)
                std::cout << "Non displayable" << std::endl;
        else
                std::cout << static_cast<char>(this->_d) << std::endl;
}

void	Convert::print_int(void)
{
	std::cout << "int: ";
        if (std::isnan(this->_d) or std::isinf(this->_d))
                std::cout << "impossible" << std::endl;
        else
                std::cout << static_cast<int>(this->_d) << std::endl;
}

void	Convert::print_float(void)
{
        std::cout << "float: ";
        std::cout << static_cast<float>(this->_d);
        if (std::fmod(this->_d,1) == 0)
                std::cout << ".0";
        std::cout << 'f' << std::endl;
}

void	Convert::print_double(void)
{
        std::cout << "double: ";
        std::cout << static_cast<double>(this->_d);
        if (std::fmod(this->_d,1) == 0)
                std::cout << ".0";
        std::cout << std::endl;
}


const char*	Convert::BadArgument::what() const throw()
{
	return ("Bad argument");
}
