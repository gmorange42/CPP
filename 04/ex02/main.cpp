#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

//	AAnimal	animal; // Does not compile
	AAnimal*	metab[4];
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

	Cat* cat = new Cat();
	Cat* copy_cat = new Cat(*cat);

	Dog* dog = new Dog();
	Dog* copy_dog = new Dog();
	*copy_dog = *dog;


	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;

//	std::cout << "animal: " << animal.getType() << std::endl;
//	animal.makeSound();
	std::cout << "dog: " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "cat: " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << "copy_dog: " << copy_dog->getType() << std::endl;
	copy_dog->makeSound();
	std::cout << "copy_cat: " << copy_cat->getType() << std::endl;
	copy_cat->makeSound();


	std::cout << "Change the type of [dog -> Waffle] and [cat -> Pancake]." << std::endl;
	dog->setType("Waffle");
	cat->setType("Pancake");
	std::cout << "dog's type: " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "cat's type: " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << "copy_dog's type: " << copy_dog->getType() << std::endl;
	copy_dog->makeSound();
	std::cout << "copy_cat's type: " << copy_cat->getType() << std::endl;
	copy_cat->makeSound();

	std::cout << "set a idea in dog's brain(Ball)" << std::endl;
	dog->setIdea(0, "Ball");

	std::cout << "set a idea in cat's brain(Fish)" << std::endl;
	cat->setIdea(0, "Fish");

	std::cout << "set a idea in copy_dog's brain(Food)" << std::endl;
	copy_dog->setIdea(0, "Food");

	std::cout << "set a idea in copy_cat's brain(Dream)" << std::endl;
	copy_cat->setIdea(0, "Dream");

	std::cout << "dog's idea: " << dog->getIdea(0) << std::endl;
	std::cout << "cat's idea: " << cat->getIdea(0) << std::endl;
	std::cout << "copy_dog's idea: " << copy_dog->getIdea(0) << std::endl;
	std::cout << "copy_cat's idea: " << copy_cat->getIdea(0) << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "metab[" << i << "] " << metab[i]->getType() << std::endl;
		metab[i]->makeSound();
	}


	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "Destruction of metab[" << i << "]." << std::endl;
		delete metab[i];
		std::cout << std::endl;
	}

	std::cout << "Destruction of copy_cat." << std::endl;
	delete copy_cat;
	std::cout << "Destruction of copy_dog." << std::endl;
	delete copy_dog;
	std::cout << "Destruction of cat." << std::endl;
	delete cat;
	std::cout << "Destruction of dog." << std::endl;
	delete dog;

	return (0);
}
