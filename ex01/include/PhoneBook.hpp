#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#define MAX_CONTACTS 8
class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		unsigned int num_contact;

	public:
		PhoneBook();
		~PhoneBook();
		void print_usage() const;
		void add_contact();
		void search_contact() const;
		void exit_contact() const;
		unsigned int get_num_contact() const;
		void print_error(std::string &input) const;
		void preview_phonebook() const;
};

#endif
