#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Hello ! Welcome to the phonebook's NO NAME !" << std::endl;
	while(true)
	{
		std::cout << "Please enter a command : [ADD] [SEARCH] [EXIT]" << std::endl;
		if (!getline(std::cin, input))
			break;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
		{
			std::cout << "Thank you for choosing NO NAME, good bye !" << std::endl;
			break;
		}
		else
			std::cout << "Invalide command." << std::endl;

	}
	return (0);
}
