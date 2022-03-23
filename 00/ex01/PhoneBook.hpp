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
//		void	print_contact(void) const;
		void	add_contact(Contact &contact);
	private:
		Contact _contact[8];
};

#endif
