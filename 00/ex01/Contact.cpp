#include "Contact.hpp"

Contact::Contact() : _firstName(), _lastName(), _phoneNumber(), _secret()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (_nickName);
}

std::string	Contact::getNumber(void) const
{
	return (_phoneNumber);
}

std::string	Contact::getSecret(void) const
{
	return (_secret);
}

bool	Contact::setFirstName(std::string str)
{
	if (str.size() > 0)
	{
		this->_firstName = str;
		return (true);
	}
	std::cout << "Incorrect entry." << std::endl;
	return (false);
}

bool	Contact::setLastName(std::string str)
{
	if (str[0])
	{
		this->_lastName = str;
		return (true);
	}
	std::cout << "Incorrect entry." << std::endl;
	return (false);
}

bool	Contact::setNickName(std::string str)
{
	if (str[0])
	{
		this->_nickName = str;
		return (true);
	}
	std::cout << "Incorrect entry." << std::endl;
	return (false);
}

bool	Contact::setNumber(std::string str)
{
	int	i = 0;
	if ((int)str.size() == 10)
	{
		while (isdigit(str[i]))
			i++;
		if (i != 10)
		{
			std::cout << "Incorrect entry. Only digits." << std::endl;
			return (false);
		}
		this->_phoneNumber = str;
		return (true);
	}
	std::cout << "Incorrect entry. Request 10 digits." << std::endl;
	return (false);
}

bool	Contact::setSecret(std::string str)
{
	if (str[0])
	{
		this->_secret = str;
		return (true);
	}
	std::cout << "Incorrect entry." << std::endl;
	return (false);
}

