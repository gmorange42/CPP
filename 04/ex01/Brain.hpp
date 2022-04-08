#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	public:
		Brain(void);
		Brain(Brain const& ref);
		Brain&	operator=(Brain const& rhs);
		~Brain();
		std::string	ideas[100];
};

#endif
