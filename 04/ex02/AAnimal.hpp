#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const& ref);
		AAnimal&	operator=(AAnimal const& rhs);
		virtual ~AAnimal();
		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
		void	setType(std::string str);
	protected:
		std::string	_type;
};

#endif
