#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const& ref);
		Dog&	operator=(Dog const& rhs);
		virtual	~Dog();
		virtual void	makeSound(void) const;
};

#endif
