#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(Dog const& ref);
		Dog&	operator=(Dog const& rhs);
		virtual	~Dog();
		virtual	void	makeSound(void) const;
		void	setIdea(int i, std::string str);
		std::string	getIdea(int i);
	private:
		Brain* _brain;
};

#endif
