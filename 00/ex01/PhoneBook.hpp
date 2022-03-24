#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		search_contact(void) const;
		void		add_contact(void);
	private:
		void		_print_contact(void) const;
		std::string	_truncate(std::string) const;
		int			_recover_index(void) const;
		int			_index;
		int			_nbrContact;
		Contact		_contact[8];
};

#endif
