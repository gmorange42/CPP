#include "PhoneBook.hpp"
#include "Contact.hpp"

void	add(PhoneBook &phonebook, Contact &contact[])
{
}

int	main(void)
{
	int	oldest = 0;
	int	i = 0;
	int	nbr_contact = 0;
	PhoneBook phonebook;
	Contact contact[8];

	std::cout << "TEST : " << contact->getFirstName() << ' ' << contact->getLastName() << ' ' << contact->getNumber() << ' ' << contact->getSecret() << std::endl;
	phonebook.add_contact(contact[i]);
	return (0);
}
