#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _nbrContact(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(void)
{
	std::string	str;
	do
	{
		std::cout << "Enter the first name : ";
		if (!getline(std::cin, str))
			return ;
	} while (!this->_contact[this->_index].setFirstName(str));
	do
	{
		std::cout << "Enter the last name : ";
		if (!getline(std::cin, str))
			return ;
	} while (!this->_contact[this->_index].setLastName(str));
	do
	{
		std::cout << "Enter the nickname : ";
		if (!getline(std::cin, str))
			return ;
	} while (!this->_contact[this->_index].setNickName(str));
	do
	{
		std::cout << "Enter the phone number : ";
		if (!getline(std::cin, str))
			return ;
	} while (!this->_contact[this->_index].setNumber(str));
	do
	{
		std::cout << "Enter the darkest secret : ";
		if (!getline(std::cin, str))
			return ;
	} while (!this->_contact[this->_index].setSecret(str));
	_index = (_index + 1) % 8;
	if (_nbrContact < 8)
		_nbrContact++;
}

std::string	PhoneBook::_truncate(std::string str) const
{
	if (str.size() > 10)
		{
			str = str.substr(0, 10);
			str[9] = '.';
		}
	return (str);
}

void	PhoneBook::_print_contact(void) const
{
	int	i = 0;
	std::string	str;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout.width(45);
	std::cout.fill('-');
	std::cout << "" << std::endl;
	std::cout.fill(' ');
	while (i < _nbrContact)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i << "|";
		str = _truncate(_contact[i].getFirstName());
		std::cout.width(10);
		std::cout << str << "|";
		str = _truncate(_contact[i].getLastName());
		std::cout.width(10);
		std::cout << str << "|";
		str = _truncate(_contact[i].getNickName());
		std::cout.width(10);
		std::cout << str << "|" << std::endl;
		i++;
	}
}

int		PhoneBook::_recover_index(void) const
{
	int			index;
	std::string	str;
	while (true)
	{
		std::cout << "Please select the index contact to display : ";
		if (!getline(std::cin, str))
			return(0);
		if (str.size() == 1 && isdigit(str[0]))
		{
			index = (int)str[0] - 48;
			if (index < _nbrContact)
				break;
		}
		std::cout << "Invalide index." << std::endl;
	}
	return (index);
}

void	PhoneBook::search_contact(void) const
{
	int	i;
	if (_nbrContact < 1)
	{
		std::cout << "No contact register." << std::endl;
		return ;
	}
	_print_contact();
	i = _recover_index();
	std::cout << "First name     :" << this->_contact[i].getFirstName() << std::endl;
	std::cout << "Last name      :" << this->_contact[i].getLastName() << std::endl;
	std::cout << "Nickname `     :" << this->_contact[i].getNickName() << std::endl;
	std::cout << "Phone number   :" << this->_contact[i].getNumber() << std::endl;
	std::cout << "Darkset secret :" << this->_contact[i].getSecret() << std::endl << std::endl;;
}
