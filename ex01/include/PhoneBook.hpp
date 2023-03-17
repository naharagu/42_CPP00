#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#define MAX_CONTACTS 8;

class PhoneBook {
	private:
		Contact contacts[MAX_CONTACTS];
		
	public:
		PhoneBook();
		~PhoneBook();
};

#endif