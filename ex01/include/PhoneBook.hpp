#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	static const unsigned int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];

public:
	unsigned int num_contact;
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