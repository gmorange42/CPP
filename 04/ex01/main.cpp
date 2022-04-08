#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	Animal*	metab[4];
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Construction of metab[" << i << "]." << std::endl;
		metab[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 2; i < 4; i++)
	{
		std::cout << "Construction of metab[" << i << "]." << std::endl;
		metab[i] = new Cat();
		std::cout << std::endl;
	}

	Cat catest;

	Cat* cat = new Cat();
	Cat *copy_cat;
	copy_cat = &catest;
	Dog* dog = new Dog();
	Dog* copy_dog;
	copy_dog = dog;


	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << copy_dog->getType() << std::endl;
	std::cout << copy_cat->getType() << std::endl;


	dog->makeSound();
	cat->makeSound();
	copy_dog->makeSound();
	copy_cat->makeSound();


	std::cout << metab[0]->getType() << std::endl;
	std::cout << metab[2]->getType() << std::endl;
//	metab[2]->_brain->ideas[0] = "HELLO";


	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "Destruction of metab[" << i << "]." << std::endl;
		delete metab[i];
		std::cout << std::endl;
	}
	delete cat;
	delete dog;

	return (0);
}
