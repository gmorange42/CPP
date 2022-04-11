#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
	public:
		Brain(void);
		Brain(Brain const& ref);
		Brain&	operator=(Brain const& rhs);
		~Brain();
		void	setIdea(int i, std::string str);
		std::string	getIdea(int i);
		std::string	ideas[100];
};

#endif
