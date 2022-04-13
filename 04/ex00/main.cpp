#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "--GOOD PART--" << std::endl << std::endl;
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	Animal* meta_ptr = new Animal();
	Animal* cat_ptr = new Cat();
	Animal* dog_ptr = new Dog();

	Animal meta;
	Cat cat;
	Dog dog;


	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;
	std::cout << "--With pointer--" << std::endl << std::endl;

	std::cout << meta_ptr->getType() << std::endl;
	std::cout << dog_ptr->getType() << std::endl;
	std::cout << cat_ptr->getType() << std::endl;

	meta_ptr->makeSound();
	dog_ptr->makeSound();
	cat_ptr->makeSound();


	std::cout << std::endl << "--Without pointer--" << std::endl << std::endl;

	std::cout << meta.getType() << std::endl;
	std::cout << dog.getType() << std::endl;
	std::cout << cat.getType() << std::endl;

	meta.makeSound();
	dog.makeSound();
	cat.makeSound();
	
	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	delete meta_ptr;
	delete cat_ptr;
	delete dog_ptr;


	std::cout << std::endl << "--WRONG PART--" << std::endl << std::endl;
	std::cout << "--CONSTRUCTORS--" << std::endl << std::endl;

	WrongAnimal* wrong_meta_ptr = new WrongAnimal();
	WrongAnimal* wrong_cat_ptr = new WrongCat();

	
	std::cout << std::endl << "--TESTS--" << std::endl << std::endl;

	std::cout << wrong_meta_ptr->getType() << std::endl;
	std::cout << wrong_cat_ptr->getType() << std::endl;
	wrong_meta_ptr->makeSound();
	wrong_cat_ptr->makeSound();


	std::cout << std::endl << "--DESTRUCTORS--" << std::endl << std::endl;

	delete wrong_meta_ptr;
	delete wrong_cat_ptr;

	return (0);
}
