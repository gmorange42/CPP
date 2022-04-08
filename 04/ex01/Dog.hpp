#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const& ref);
		Dog&	operator=(Dog const& rhs);
		~Dog();
		void	makeSound(void) const;
	private:
		Brain* _brain;
};

#endif
