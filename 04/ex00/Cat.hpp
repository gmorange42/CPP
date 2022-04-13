#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& ref);
		Cat&	operator=(Cat const& rhs);
		virtual	~Cat();
		virtual void	makeSound(void) const;
};

#endif
