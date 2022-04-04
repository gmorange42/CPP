#include "Zombie.hpp"

int	main(void)
{
	Zombie *bigHorde = zombieHorde(12,"Franck");
	for (int i = 0; i < 12; i++)
		bigHorde[i].announce();

	Zombie *mediumHorde = zombieHorde(6,"Jimmy");
	for (int i = 0; i < 6; i++)
		mediumHorde[i].announce();

	Zombie *smallHorde = zombieHorde(3,"Brigitte");
	for (int i = 0; i < 3; i++)
		smallHorde[i].announce();

	delete [] bigHorde;
	delete [] mediumHorde;
	delete [] smallHorde;
	return (0);
}
