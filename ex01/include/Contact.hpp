#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		unsigned int print_index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		~Contact();
		void preview_contact() const;
		void print_contact() const;
		void register_contact(unsigned int index);
		std::string register_item(std::string str);
		std::string compress_to_10(std::string str) const;
};

#endif
