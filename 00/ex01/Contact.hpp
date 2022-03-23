#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	public:
		Contact();
		~Contact();
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getNumber(void) const;
		std::string	getSecret(void) const;
		bool	setFirstName(std::string str);
		bool	setLastName(std::string str);
		bool	setNickName(std::string str);
		bool	setNumber(std::string str);
		bool	setSecret(std::string str);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_secret;
};

#endif
