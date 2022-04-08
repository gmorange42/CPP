#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const& ref);
		Animal&	operator=(Animal const& rhs);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
		void	setType(std::string str);
	protected:
		std::string	_type;
};

#endif
