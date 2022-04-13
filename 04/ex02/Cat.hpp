#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(Cat const& ref);
		Cat&	operator=(Cat const& rhs);
		virtual	~Cat();
		virtual	void	makeSound(void) const;
		void	setIdea(int i, std::string str);
		std::string	getIdea(int i);
	private:
		Brain* _brain;
};

#endif
