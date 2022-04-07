#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "--GOOD PART--" << std::endl << std::endl;
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	Animal* meta = new Animal();
	Animal* cat = new Cat();
	Animal* dog = new Dog();


	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;

	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;


	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	
	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	delete meta;
	delete cat;
	delete dog;


	std::cout << std::endl << "--WRONG PART--" << std::endl << std::endl;
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	WrongAnimal* wrong_meta = new WrongAnimal();
	WrongAnimal* wrong_cat = new WrongCat();

	
	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;

	std::cout << wrong_meta->getType() << std::endl;
	std::cout << wrong_cat->getType() << std::endl;
	wrong_meta->makeSound();
	wrong_cat->makeSound();


	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	delete wrong_meta;
	delete wrong_cat;

	return (0);
}
