#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& ref);
		Cat&	operator=(Cat const& rhs);
		~Cat();
		void	makeSound(void) const;
		void	setBrain(int i, std::string str);
	private:
		Brain* _brain;
};

#endif
