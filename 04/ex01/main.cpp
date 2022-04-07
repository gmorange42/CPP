#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	Animal* metab = new Animal[4]();
	for(int i = 0; i < 2; i++)
		metab[i] = Dog();
	for(int i = 2; i < 4; i++)
		metab[i] = Cat();


	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;

	

	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	delete [] metab;


	return (0);
}
