#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(Contact &contact)
{
	std::string	str;
	do
	{
		std::cout << "Enter the first name : ";
		getline(std::cin, str);
	} while (!contact.setFirstName(str));
	do
	{
		std::cout << "Enter the last name : ";
		getline(std::cin, str);
	} while (!contact.setLastName(str));
	do
	{
		std::cout << "Enter the nick name : ";
		getline(std::cin, str);
	} while (!contact.setNickName(str));
	do
	{
		std::cout << "Enter the phone number : ";
		getline(std::cin, str);
	} while (!contact.setNumber(str));
	do
	{
		std::cout << "Enter the darkest secret : ";
		getline(std::cin, str);
	} while (!contact.setSecret(str));
}

/*
void	PhoneBook::print_contact(void) const
{
	std::cout << getFirst
}*/
