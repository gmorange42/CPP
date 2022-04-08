#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

/*	Animal*	metab[4];
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
*/
	Cat* cat = new Cat();
	Cat* copy_cat = new Cat(*cat);
	Dog* dog = new Dog();
//	Dog* copy_dog = new Dog(*dog);


	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
//	std::cout << copy_dog->getType() << std::endl;
	std::cout << copy_cat->getType() << std::endl;


	dog->makeSound();
	cat->makeSound();
//	copy_dog->makeSound();
	copy_cat->makeSound();

	std::cout << "Change the type of dog and cat." << std::endl;
	dog->setType("Waffle");
	cat->setType("Pancake");
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
//	std::cout << copy_dog->getType() << std::endl;
	std::cout << copy_cat->getType() << std::endl;


//	std::cout << metab[0]->getType() << std::endl;
//	std::cout << metab[2]->getType() << std::endl;


	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

/*	for (int i = 0; i < 4; i++)
	{
		std::cout << "Destruction of metab[" << i << "]." << std::endl;
		delete metab[i];
		std::cout << std::endl;
	}
*/	
	std::cout << "START copy_cat" << std::endl;
	delete copy_cat;
	std::cout << "END copy_cat" << std::endl;
	std::cout << "START copy_dog" << std::endl;
//	delete copy_dog;
	std::cout << "END copy_dog" << std::endl;
	std::cout << "START cat" << std::endl;
	delete cat;
	std::cout << "END cat" << std::endl;
	std::cout << "START dog" << std::endl;
	delete dog;
	std::cout << "END cat" << std::endl;

	return (0);
}
