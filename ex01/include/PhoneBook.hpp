#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		static const int MAX_CONTACTS = 8;
		Contact contacts[MAX_CONTACTS];

	public:
		PhoneBook();
		~PhoneBook();
		void print_usage();
		void add_contact();
		void search_contact();
		void exit_contact();
		void print_error(std:: string &input);
};

#endif